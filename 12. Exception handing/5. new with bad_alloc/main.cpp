#include <iostream>
#include <new>

using std::cout;
using std::endl;
using std::bad_alloc;

int main()
{
    double *ptr[50];

    try{
        for(int i = 0; i < 50; i++){
            ptr[i] = new double[5000000];
            cout<<"Allocated 5000000 cells type of double for ptr[ "<<i<<" ]\n";
        }
    }
    catch(bad_alloc exception){
        cout<<"Exception occurred: "
            <<exception.what()<<endl;
    }

    return 0;
}
