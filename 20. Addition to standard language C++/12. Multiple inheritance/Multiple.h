#ifndef MULTIPLE_H_INCLUDED
#define MULTIPLE_H_INCLUDED

class Multiple : public DerivedOne, public DerivedTwo
{
public:
    void print() const { DerivedTwo::print(); }
};

#endif // MULTIPLE_H_INCLUDED
