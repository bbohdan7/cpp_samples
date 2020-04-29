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

void outputLine(int, const char *const, double);

int main()
{
    ifstream inClientFile("clients.dat", ios::in);

    if(!inClientFile){
        cerr<<"Cannot open file\n";
        exit(1);
    }

    int account;
    char name[30];
    double balance;

    cout<<setiosflags(ios::left)<<setw(10)<<"Account"
        <<setw(13)<<"Name"<<"Balance\n"
        <<setiosflags(ios::fixed | ios::showpoint);


    while(inClientFile>>account>>name>>balance)
        outputLine(account, name, balance);


    return 0;
}

void outputLine(int acct, const char *const name, double bal)
{
    cout<<setiosflags(ios::left)<<setw(10)<<acct
        <<setw(13)<<name<<setw(7)<<setprecision(2)
        <<bal<<'\n';
}
