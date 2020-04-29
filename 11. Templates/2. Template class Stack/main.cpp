#include <iostream>

using namespace std;

#include "Stack.cpp"

int main()
{
    Stack<double> doubleStack(5);
    double f = 1.1;
    cout<<"Adding element into doubleStack\n";

    while(doubleStack.push(f)){
        cout<<f<<' ';
        f += 1.1;
    }

    cout<<"\nStack is full. Cannot to add "<<f
        <<"\n\nEjecting elements from doubleStack\n";

    while(doubleStack.pop(f))
        cout<<f<<' ';

    cout<<"\nStack is empty. Cannot eject\n";

    //template object with integer.

    Stack<int> intStack;
    int i = 1;
    cout<<"\nAdding element into intStack\n";

    while(intStack.push(i)){
        cout<<i<<' ';
        ++i;
    }

    cout<<"\nThe stack is full. Cannot to add "<<i
        <<"\n\nEjecting element from intStack\n";

    while(intStack.pop(i))
        cout<<i<<' ';

    cout<<"\nThe stack is full. Cannot to eject\n";

    return 0;
}
