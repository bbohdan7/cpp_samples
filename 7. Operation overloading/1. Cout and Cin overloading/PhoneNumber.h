#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>

using namespace std;

class PhoneNumber
{
    friend ostream &operator<<( ostream&, const PhoneNumber& );
    friend istream &operator>>( istream&, PhoneNumber& );

    private:
        char areaCode[4];
        char exchange[4];
        char line[5];
};

#endif // PHONENUMBER_H
