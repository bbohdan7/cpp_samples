#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "Stack.cpp"

template<class T>
void testStack(Stack<T>&, T, T, const char*);

int main()
{
    Stack<double> doubleStack(5);
    Stack<int> intStack;

    testStack(doubleStack, 1.1, 1.1, "doubleStack");
    testStack(intStack, 1, 1, "intStack");

    return 0;
}

template<class T>
void testStack(
    Stack<T> &theStack,
    T value,
    T increment,
    const char *stackName)
{
    cout<<"\nAdding elements to "<<stackName<<'\n';

    while(theStack.push(value)){
        cout<<value<<' ';
        value += increment;
    }

    cout<<"\nThe stack is full. Cannot to add "<<stackName<<'\n';

    cout<<"\nEjecting elements from "<<stackName<<'\n';

    while(theStack.pop(value))
        cout<<value<<' ';

    cout<<"\nThe stack is empty. Cannot eject\n";
}
