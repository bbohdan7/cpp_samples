#include <iostream>
#include <bitset>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    const int size = 1024;
    int i, value, counter;
    std::bitset<size> sieve;

    sieve.flip();

    int finalBit = sqrt(sieve.size()) + 1;

    for(i = 2; i < finalBit; ++i)
        if(sieve.test(i))
            for(int j = 2 * i; j < size; j += i)
                sieve.reset(j);

    cout<<"Simple digits in diapason from 2 till 1023:\n";

    for(i = 2, counter = 0; i < size; ++i)
        if(sieve.test(i)){
            cout<<setw(5)<<i;

            if(++counter % 12 == 0)
                cout<<'\n';
        }

        cout<<endl;

        cout<<"\nEnter number from 1 till 1023 (-1 to exit): ";
        cin>>value;

        while(value != -1){
            if(sieve[value])
                cout<<value<<" - is a simple number\n";
            else
                cout<<value<<" - is not simple number \n";

            cout<<"\nEnter number from 1 till 1023 (-1 to exit): ";
            cin>>value;
        }

        return 0;
}
