#include <iostream>

using namespace std;

int squareByValue(int);
int squareByReference(int&);

int main()
{
    int x = 2, z = 4;

    cout<<"x = "<<x<<" before squareByValue\n"
        <<"Value, returned with squareByValue: "
        <<squareByValue(x)<<endl
        <<"x = "<<x<<" after squareByValue\n"<<endl;

    cout<<"z = "<<z<<" before squareByReference"<<endl;
    squareByReference(z);
    cout<<"z = "<<z<<" after squareByReference"<<endl;

    return 0;
}

int squareByValue(int a){ return a *= a; }
int squareByReference(int &cRef){ cRef *= cRef; }
