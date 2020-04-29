#ifndef BASE2_H_INCLUDED
#define BASE2_H_INCLUDED

class Base2{

public:
    Base2(char c){ letter = c; }
    char getData() const{ return letter; }

protected:
    char letter;
};


#endif // BASE2_H_INCLUDED
