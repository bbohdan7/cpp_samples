#include <iostream>
#include <fstream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::ios;
using std::cerr;
using std::endl;
using std::ofstream;

int main()
{
    ofstream outClientFile("client.dat", ios::out);

    if(!outClientFile){
        cerr<<"File cannot be opened"<<endl;
        exit(1);
    }

    cout<<"Enter account, name and balance.\n"
        <<"Enter EOF to end entering.\n?";

    int account;
    char name[30];
    double balance;

    while(cin>>account>>name>>balance){
        outClientFile<<account<<' '<<name
                     <<' '<<balance<<'\n';
        cout<<"? ";
    }

    return 0;
}
