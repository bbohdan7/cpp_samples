#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using std::ostream;
using std::istream;

class Array
{
    friend ostream &operator<<(ostream&, const Array&);
    friend istream &operator>>(istream&, Array&);

    public:
        Array(int = 10);
        Array(const Array&);
        ~Array();
        int getSize() const;
        const Array &operator=(const Array&);
        bool operator==(const Array &right) const;
        bool operator!=(const Array&) const;
        int &operator[](int);
        const int &operator[](int) const;
        static int getArrayCount();
    private:
        int size;
        int *ptr;
        static int arrayCount;
};

#endif // ARRAY_H
