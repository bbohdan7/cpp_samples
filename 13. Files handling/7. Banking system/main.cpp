#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::ios;

#include <fstream>
using std::ofstream;
using std::ostream;
using std::fstream;

#include <iomanip>
using std::setiosflags;
using std::resetiosflags;
using std::setw;
using std::setprecision;

#include <cstdlib>
#include "clntdata.h"

int enterChoice();
void textFile(fstream&);
void updateRecord(fstream&);
void newRecord(fstream&);
void deleteRecord(fstream&);
void outputLine(ostream&, const clientData&);
int getAccount(const char *const);

enum Choices { TEXTFILE = 1, UPDATE, NEW, DELETE, END };

int main()
{
    fstream inOutCredit("credit.dat", ios::in | ios::out);

    if(!inOutCredit){
        cerr<<"Cannot open file!"<<endl;
        exit(1);
    }

    int choice;

    while((choice = enterChoice()) != END){
        switch(choice){
            case TEXTFILE:
                textFile(inOutCredit);
                break;
            case UPDATE:
                updateRecord(inOutCredit);
                break;
            case NEW:
                newRecord(inOutCredit);
                break;
            case DELETE:
                deleteRecord(inOutCredit);
                break;
            default:
                cerr<<"Incorrect choice\n";
                break;
        }
        inOutCredit.clear();
    }

    return 0;
}

int enterChoice()
{
    cout<<"\nEnter your choice"<<endl
        <<"1 - Save file with text format\n"
        <<"2 - Change account\n"
        <<"3 - Add new account\n"
        <<"4 - Delete account\n"
        <<"5 - Exit\n? ";

    int menuChoice;
    cin>>menuChoice;
    return menuChoice;
}

void textFile(fstream &readFromFile)
{
    ofstream outPrintFile("print.txt", ios::out);

    if(!outPrintFile){
        cerr<<"Cannot open file!"<<endl;
        exit(1);
    }

    outPrintFile<<setiosflags(ios::left)<<setw(10)
                <<"Account"<<setw(16)<<"Lastname"<<setw(11)
                <<"Firstname"<<resetiosflags(ios::left)
                <<setw(10)<<"Balance"<<endl;
    readFromFile.seekg(0);

    clientData client;
    readFromFile.read(reinterpret_cast<char*>(&client), sizeof(clientData));

    while(!readFromFile.eof()){
        if(client.accountNumber != 0)
            outputLine(outPrintFile, client);

        readFromFile.read(reinterpret_cast<char*>(&client), sizeof(clientData));
    }
}

void updateRecord(fstream &updateFile)
{
    int account = getAccount("Enter account to update");

    updateFile.seekg((account - 1) * sizeof(clientData));

    clientData client;
    updateFile.read(reinterpret_cast<char*>(&client), sizeof(clientData));

    if(client.accountNumber != 0){
        outputLine(cout, client);
        cout<<"\Enter expense (+) or afterpayment (-): ";

        double transaction;
        cin>>transaction;
        client.balance += transaction;
        outputLine(cout, client);
        updateFile.seekg((account - 1) * sizeof(clientData));
        updateFile.write(reinterpret_cast<char*>(&client), sizeof(clientData));
    }
    else
        cerr<<"Account #"<<account
            <<" has no information."<<endl;
}

void newRecord(fstream &insertInFile)
{
    int account = getAccount("Enter new account number: ");

    insertInFile.seekg((account - 1) * sizeof(clientData));

    clientData client;

    insertInFile.read(reinterpret_cast<char*>(&client), sizeof(clientData));

    if(client.accountNumber != 0){
        cout<<"Enter lastname, firstname and balance\n? ";
        cin>>client.lastname>>client.firstname>>client.balance;
        client.accountNumber = account;

        insertInFile.write(reinterpret_cast<char*>(&client), sizeof(clientData));
    }
    else
        cerr<<"Account #"<<account
            <<" already consist this information."<<endl;
}

void deleteRecord(fstream &deleteFromFile)
{
    int account = getAccount("Enter account to delete.");

    deleteFromFile.seekg((account - 1) * sizeof(clientData));

    clientData client;

    deleteFromFile.read(reinterpret_cast<char*>(&client), sizeof(clientData));

    if(client.accountNumber != 0){
        clientData blankClient = {0, "", "", 0.0};

        deleteFromFile.seekp((account - 1) * sizeof(clientData));

        deleteFromFile.write(reinterpret_cast<char*>(&client), sizeof(clientData));

        cout<<"Account #"<<account<<" has been deleted."<<endl;
    }
    else
        cerr<<"Account #"<<account<<" is empty"<<endl;
}

void outputLine(ostream &output, const clientData &c)
{
    cout<<setiosflags(ios::left)<<setw(10)
        <<c.accountNumber<<setw(16)<<c.lastname
        <<setw(11)<<c.firstname<<setw(10)
        <<setprecision(2)<<resetiosflags(ios::left)
        <<setiosflags(ios::fixed | ios::showpoint)
        <<c.balance<<'\n';
}

int getAccount(const char *const prompt)
{
    int account;

    do{
        cout<<prompt<<" (1 - 100): ";
        cin>>account;
    }while(account < 1 || account > 100);

    return account;
}
