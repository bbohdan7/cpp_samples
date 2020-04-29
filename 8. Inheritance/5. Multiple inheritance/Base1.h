#ifndef BASE1_H_INCLUDED
#define BASE1_H_INCLUDED

class Base1{

public:
    Base1(int x){ value = x; }
    int getData() const{ return value; }

protected:
    int value;
};


#endif // BASE1_H_INCLUDED
