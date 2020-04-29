#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "List.cpp"

template<class STACKTYPE>
class Stack : private List<STACKTYPE>
{
public:
    void push(const STACKTYPE &d){ s.insertAtFront(d); }
    bool pop(STACKTYPE &d){ return s.removeFromFront(d); }
    bool isStackEmpty() const { return s.isEmpty(); }
    void printStack() const { s.print(); }
private:
    List<STACKTYPE> s;
};


#endif // STACK_H_INCLUDED
