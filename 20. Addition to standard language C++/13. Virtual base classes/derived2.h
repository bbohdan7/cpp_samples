#ifndef DERIVED2_H_INCLUDED
#define DERIVED2_H_INCLUDED

class DerivedTwo : virtual public Base
{
public:
    void print() const { std::cout<<"DerivedTwo\n"; }
};


#endif // DERIVED2_H_INCLUDED
