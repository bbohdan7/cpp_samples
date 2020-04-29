#ifndef STACK_H
#define STACK_H

template<class T>
class Stack
{
    public:
        Stack(int = 10);
        ~Stack();
        bool push(const T&);
        bool pop(T&);

    private:
        int size;
        int top;
        T *stackPtr;

        bool isEmpty() const;
        bool isFull() const;
};

#endif // STACK_H
