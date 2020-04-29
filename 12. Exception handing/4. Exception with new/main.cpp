#include <iostream>

using std::cout;

int main()
{
    double *ptr[50];

    for(int i = 0; i < 50; i++){
        ptr[i] = new double[5000000];

        if(ptr[i] == 0){
            cout<<"Memory allocation unsuccessful for ptr[ "<<i<<" ]\n";
            break;
        }
        else
            cout<<"Allocated 5000000 cells type of double for ptr[ "<<i<<" ]\n";
    }

    return 0;
}
