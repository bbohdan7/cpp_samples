#include <iostream>
#include <exception>

using std::cout;
using std::endl;
using std::exception;

void throwException();

int main()
{
    try{
        throwException();
        cout<<"This must not be printed\n";
    }
    catch(exception e){
        cout<<"Exception generated in main\n";
    }

    cout<<"Continue to carry on function main"
        <<endl;

    return 0;
}

void throwException()
{
    try{
        cout<<"Function throwException\n";
        throw exception();
    }
    catch(exception e){
        cout<<"Exception generated in throwException\n";
        throw; //It'll call to terminate();
    }
    cout<<"This must not be printed\n";
}
