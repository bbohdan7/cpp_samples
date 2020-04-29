#include "PhoneNumber.h"

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

ostream &operator<<( ostream &output, const PhoneNumber &num )
{
    output<<"("<<num.areaCode<<") "
          <<num.exchange<<"-"<<num.line;

    return output;
}

istream &operator>>( istream &input, PhoneNumber &num )
{
    input.ignore();
    input>>setw(4)>>num.areaCode;
    input.ignore(2);
    input>>setw(4)>>num.exchange;
    input.ignore();
    input>>setw(5)>>num.line;

    return input;
}

