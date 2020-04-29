#include <iostream>

using namespace std;

union Number{
    int x;
    double y;
};

int main()
{
    Number value;

    value.x = 100;
    cout<<"Add value to integer-member of union\n"
        <<"and print both of members of union.\nint:   "
        <<value.x<<"\ndouble:   "<<value.y<<"\n\n";

    value.y = 100.0;
    cout<<"Add value to double-member of union\n"
        <<"and print both of members of union.\nint:   "
        <<value.x<<"\ndouble:   "<<value.y<<endl;

    return 0;
}
