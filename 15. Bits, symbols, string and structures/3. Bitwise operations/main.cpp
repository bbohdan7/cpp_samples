#include <iostream>
#include <iomanip>

using namespace std;

void displayBits(unsigned);

int main()
{
    unsigned number1, number2, mask, setBits;

    number1 = 2179876355;
    mask = 1;

    cout<<"Result of combining values\n";

    displayBits(number1);
    displayBits(mask);

    cout<<"Bitwise 'and' (&)\n";
    displayBits(number1 & mask);

    number1 = 15;
    setBits = 241;

    cout<<"\nResults of combining values\n";

    displayBits(number1);
    displayBits(setBits);

    cout<<"Bitwise 'or' (|)\n";
    displayBits(number1 | setBits);

    number1 = 139;
    number2 = 199;

    cout<<"\nResult of combining values\n";

    displayBits(number1);
    displayBits(number2);

    cout<<"Bitwise 'exception or' (^)\n";
    displayBits(number1 ^ number2);

    number1 = 21845;


    displayBits(number1);
    cout<<"\nBitwise 'not' (~)"<<endl;
    displayBits(~number1);

    return 0;
}

void displayBits(unsigned value)
{
    const int SHIFT = 8 * sizeof(unsigned) - 1;
    const unsigned MASK = 1 << SHIFT;

    cout<<setw(10)<<value<<" = ";

    for(unsigned c = 1; c <= SHIFT + 1; c++){
        cout<<(value & MASK ? '1' : '0');
        value <<= 1;

        if(c % 8 == 0)
            cout<<' ';
    }

    cout<<endl;
}
