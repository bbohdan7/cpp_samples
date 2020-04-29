#ifndef DERIVED1_H_INCLUDED
#define DERIVED1_H_INCLUDED

class DerivedOne : virtual public Base
{
public:
    void print() const { std::cout<<"DerivedOne\n"; }
};


#endif // DERIVED1_H_INCLUDED
