#include <iostream>

using namespace std;

void function1(int);
void function2(int);
void function3(int);

int main()
{
    void (*f[3])(int) = { function1, function2, function3 };
    int choice;

    cout<<"Enter a number between 0 and 2 or 3 to terminate: ";
    cin>>choice;

    while(choice >= 0 && choice < 3){
        (*f[choice])(choice);
        cout<<"Enter a number between 0 and 2 or 3 to terminate: ";
        cin>>choice;
    }

    cout<<"Execution of program has been terminated."<<endl;
}

void function1(int a)
{
    cout<<"You entered "<<a<<" and therefore has been invoked function1\n\n";
}

void function2(int b)
{
    cout<<"You entered "<<b<<" and therefore has been invoked function2\n\n";
}

void function3(int c)
{
    cout<<"You entered "<<c<<" and therefore has been invoked function3\n\n";
}
