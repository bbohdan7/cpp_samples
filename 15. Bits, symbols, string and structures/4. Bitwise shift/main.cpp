#include <iostream>
#include <iomanip>
using namespace std;

void displayBits(unsigned);

int main()
{
    unsigned number1 = 960;

    cout<<"Result of left shift\n";
    displayBits(number1);
    cout<<"On 8 bits with left-shift operation\n";
    displayBits(number1 << 8);
    cout<<"\nResult of right shift\n";
    displayBits(number1);

    cout<<"On 8 bits with right-shift operation\n";
    displayBits(number1 >> 8);

    return 0;
}

void displayBits(unsigned value)
{
    const int SHIFT = 8 * sizeof(unsigned) - 1;
    const unsigned MASK = 1 << SHIFT;

    cout<<setw(7)<<value<<" = ";

    for(unsigned c = 1; c <= SHIFT; c++){
        cout<<(value & MASK ? '1' : '0');
        value <<= 1;

        if(c % 8 == 0)
            cout<<' ';
    }

    cout<<endl;
}
