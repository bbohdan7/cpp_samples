#ifndef INCREMENT_H
#define INCREMENT_H

#include <iostream>

using std::cout;
using std::endl;

class Increment
{
    public:
        Increment(int c = 0, int i = 1);
        void addIncrement(){ count += increment; }
        void print() const;
    private:
        int count;
        const int increment;
};

#endif // INCREMENT_H
