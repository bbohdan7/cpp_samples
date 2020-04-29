#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using std::cout;
using std::cin;
using std::ios;
using std::cerr;
using std::endl;
using std::ifstream;
using std::setiosflags;
using std::resetiosflags;
using std::setw;
using std::setprecision;

enum RequestType { ZERO_BALANCE = 1, CREDIT_BALANCE, DEBIT_BALANCE, END };

int getRequest();
bool shouldDisplay(int, double);
void outputLine(int, const char *const, double);

int main()
{
    ifstream inClientFile("clients.dat", ios::in);

    if(!inClientFile){
        cerr<<"Cannot open file!"<<endl;
        exit(1);
    }

    int request, account;
    char name[30];
    double balance;

    cout<<"Enter request\n"
        <<" 1 - List of accounts with null balances\n"
        <<" 2 - List of accounts with credit balances\n"
        <<" 3 - List of account with debit balances\n"
        <<" 4 - Exit"
        <<setiosflags(ios::fixed | ios::showpoint);
    request = getRequest();

    while(request != END){
        switch(request){
            case ZERO_BALANCE:
                cout<<"\nAccounts with null balances:\n";
                break;
            case CREDIT_BALANCE:
                cout<<"\nAccounts with credit balances:\n";
                break;
            case DEBIT_BALANCE:
                cout<<"\nAccount with debit balances:\n";
                break;
        }

        inClientFile>>account>>name>>balance;

        while(!inClientFile.eof()){
            if(shouldDisplay(request, balance))
                outputLine(account, name, balance);

            inClientFile>>account>>name>>balance;
        }

        inClientFile.clear();
        inClientFile.seekg(0);
        request = getRequest();
    }

    cout<<"End of working."<<endl;

    return 0;
}

int getRequest()
{
    int request;

    do{
        cout<<"\n? ";
        cin>>request;
    }while(request < ZERO_BALANCE && request > END);

    return request;
}

bool shouldDisplay(int type, double balance)
{
    if(type == CREDIT_BALANCE && balance < 0)
        return true;
    if(type == DEBIT_BALANCE && balance > 0)
        return true;
    if(type == ZERO_BALANCE && balance == 0)
        return true;

    return false;
}

void outputLine(int acct, const char *const name, double bal)
{
    cout<<setiosflags(ios::left)<<setw(10)<<acct
        <<setw(13)<<name<<setw(7)<<setprecision(2)
        <<resetiosflags(ios::left)
        <<bal<<'\n';
}
