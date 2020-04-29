#include <iostream>
#include <fstream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::cerr;
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

    clientData blankClient = {0, "", "", 0.0};

    for(int i = 0; i < 100; i++)
        outCredit.write(reinterpret_cast<const char*>(&blankClient), sizeof(clientData));

    return 0;
}
