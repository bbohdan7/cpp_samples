#include <iostream>
#include <stdexcept>

using std::cout;
using std::endl;
using std::runtime_error;

void function3() throw(runtime_error);
void function2() throw(runtime_error);
void function1() throw(runtime_error);

int main()
{
    try{
        function1();
    }
    catch(runtime_error e){
        cout<<"Occurring of exception: "<<e.what()<<endl;
    }

    return 0;

}

void function3() throw(runtime_error)
{
    throw runtime_error("runtime-error in function3");
}

void function2() throw(runtime_error)
{
    function3();
}

void function1() throw(runtime_error)
{
    function2();
}

