#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::ios;
using std::cerr;
using std::setiosflags;
using std::setiosflags;
using std::resetiosflags;
using std::setw;
using std::setprecision;
using std::ifstream;
using std::ostream;

#include "clntdata.h"

void outputLine(ostream&, const clientData&);

int main()
{
    ifstream inCredit("credit.dat", ios::in);

    if(!inCredit){
        cerr<<"Cannot open file!"<<endl;
        exit(1);
    }

    cout<<setiosflags(ios::left)<<setw(10)<<"Account"
        <<setw(16)<<"lastname"<<setw(11)<<"firstname"
        <<resetiosflags(ios::left)<<setw(10)<<"Balance"<<endl;

    clientData client;

    inCredit.read(reinterpret_cast<char *>(&client), sizeof(clientData));

    while(inCredit && !inCredit.eof()){
        if(client.accountNumber != 0)
            outputLine(cout, client);

        inCredit.read(reinterpret_cast<char*>(&client), sizeof(clientData));
    }

    return 0;
}

void outputLine(ostream &output, const clientData &c)
{
    output<<setiosflags(ios::left)<<setw(10)
          <<c.accountNumber<<setw(16)<<c.lastname
          <<setprecision(2)<<resetiosflags(ios::left)
          <<setiosflags(ios::fixed | ios::showpoint)
          <<c.balance<<'\n';
}
