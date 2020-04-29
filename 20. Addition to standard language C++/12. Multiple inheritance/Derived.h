#ifndef DERIVED_H_INCLUDED
#define DERIVED_H_INCLUDED

class DerivedOne : public Base
{
public:
    void print() const { std::cout<<"DerivedOne\n"; }
};


#endif // DERIVED_H_INCLUDED
