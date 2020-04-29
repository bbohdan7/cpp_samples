#include <iostream>
#include <cstdlib>
#include <new>

using std::cout;
using std::cerr;
using std::set_new_handler;

void customNewHandler()
{
    cerr<<"customNewHandler has been invoked ";
    abort();
}

int main()
{
    double *ptr[50];
    set_new_handler(customNewHandler);

    for(int i = 0; i < 50; i++){
        ptr[i] = new double[5000000];

        cout<<"Allocated 5000000 cells type of double for ptr[ "
            <<i<<" ]\n";
    }

    return 0;
}

