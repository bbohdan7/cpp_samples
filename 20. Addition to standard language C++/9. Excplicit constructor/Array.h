#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using std::cout;
using std::ostream;

class Array
{
    friend ostream &operator<<(ostream&, const Array&);

    public:
        explicit Array(int = 10);
        ~Array();

    private:
        int size;
        int *ptr;
};

#endif // ARRAY_H
