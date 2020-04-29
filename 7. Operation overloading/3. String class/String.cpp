#include "String.h"

#include <iostream>
#include <cstring>
#include <iomanip>
#include <cassert>

using std::cout;
using std::endl;
using std::setw;

String::String(const char *s)
    :length( strlen(s) )
{
    cout<<"Conversion constructor: "<<s<<"\n";
    setString(s);
}

String::String(const String &copy)
    :length(copy.length)
    {
        cout<<"Copy constructor: "<<copy.sPtr<<'\n';
        setString(copy.sPtr);
    }

String::~String()
{
    cout<<"Destructor: "<<sPtr<<'\n';
    delete[] sPtr;
}

const String &String::operator=(const String &right)
{
    cout<<"operator= called\n";

    if(&right != this){
        delete[] sPtr;
        length = right.length;
        setString(right.sPtr);
    }
    else
        cout<<"Attempted to assign of a String to itself\n";

    return *this;
}

const String &String::operator+=(const String &right)
{
    char *tempPtr = sPtr;
    length += right.length;
    sPtr = new char[length + 1];
    assert(sPtr != 0);
    strcpy(sPtr, tempPtr);
    strcat(sPtr, right.sPtr);
    delete[] tempPtr;

    return *this;
}

bool String::operator!() const
{
    return length == 0;
}

bool String::operator==(const String &right) const
{
    return strcmp(sPtr, right.sPtr) == 0;
}

bool String::operator!=(const String &right) const
{
    return !(*this == right);
}

bool String::operator<(const String &right) const
{
    return strcmp(sPtr, right.sPtr) < 0;
}

bool String::operator>(const String &right) const
{
    return right < *this;
}

bool String::operator<=(const String &right) const
{
    return !(right < *this);
}

bool String::operator>=(const String &right) const
{
    return !(*this < right);
}

char &String::operator[](int subscript)
{
    assert(subscript >= 0 && subscript < length);

    return sPtr[subscript];
}

const char &String::operator[](int subscript) const
{
    assert(subscript >= 0 && subscript < length);

    return sPtr[subscript];
}

String String::operator()(int index, int sublength)
{
    assert(index >= 0 && index < length && sublength >= 0);

    int len;

    if( (sublength == 0) || (index + sublength > length) )
        len = length - index;
    else
        len = sublength;

    char *tempPtr = new char[length + 1];
    assert(tempPtr != 0);
    strncpy(tempPtr, &sPtr[index], len);
    tempPtr[len] = '\0';
    String tempString(tempPtr);
    delete[] tempPtr;

    return tempString;
}

int String::getLength() const
{
    return length;
}

void String::setString(const char *string2)
{
    sPtr = new char[length + 1];
    assert(sPtr != 0);
    strcpy(sPtr, string2);
}

ostream &operator<<(ostream &output, const String &s)
{
    output<<s.sPtr;

    return output;
}

istream &operator>>(istream &input, String &s)
{
    char temp[100];

    input>>setw(100)>>temp;
    s = temp;

    return input;
}

