#include <iostream>
#include "stack.h"

using std::cout;
using std::endl;


int main()
{
    Stack<int> intStack;
    int popInteger, i;
    cout<<"Handing stack with integer-numbers"<<endl;

    for(i = 0; i < 4; i++){
        intStack.push(i);
        intStack.printStack();
    }

    while(!intStack.isStackEmpty()){
        intStack.pop(popInteger);
        cout<<popInteger<<" popping from the stack"<<endl;
        intStack.printStack();
    }

    Stack<double> doubleStack;
    double val = 1.1, popDouble;
    cout<<"Handing stack with double-numbers"<<endl;

    for(int i = 0; i < 4; i++){
        doubleStack.push(val);
        doubleStack.printStack();
        val += 1.1;
    }

    while(!doubleStack.isStackEmpty()){
        doubleStack.pop(popDouble);
        cout << popDouble << " popping from the stack" << endl;
        doubleStack.printStack();
    }

    return 0;
}
