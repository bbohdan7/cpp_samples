#include <iostream>

using std::cout;
using std::endl;

int main()
{
    char *string = "test";

    cout<<"Value of variable string: "<<string
        <<"\nValue of address of variable string: "
        <<static_cast<void *>(string)<<endl;

    return 0;
}
