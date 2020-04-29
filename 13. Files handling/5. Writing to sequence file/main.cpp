#include <iostream>
#include <fstream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cerr;
using std::cin;
using std::ios;
using std::ofstream;

#include "clntdata.h"

int main()
{
    ofstream outCredit("credit.dat", ios::binary);

    if(!outCredit){
        cerr<<"Cannot open file!"<<endl;
        exit(1);
    }

    cout<<"Enter account number"
        <<"from 1 till 100 and 0 - to exit program\n?";

    clientData client;
    cin>>client.account;

    while(client.account > 0 && client.account <= 100){
        cout<<"Enter lastname, firstname and balance\n?";
        cin>>client.lastname>>client.firstname>>client.balance;

        outCredit.seekp((client.account - 1) * sizeof(clientData));

        outCredit.write(reinterpret_cast<const char*>(&client), sizeof(clientData));

        cout<<"Enter account number\n? ";
        cin>>client.account;
    }

    return 0;
}
