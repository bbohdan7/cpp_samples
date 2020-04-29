#include <iostream>

using namespace std;

int main()
{
    int b[] = { 10, 20, 30, 40 }, i, offset;
    int *bPtr = b; // set bPtr to point to array b

    cout<<"Array b, printed with:\n"
        <<"designation of array's index\n";

    for(i = 0; i < 4; i++)
        cout<<"b["<<i<<"] = "<<b[i]<<'\n';

    cout<<"\nPointer/offset in designation where\n"
        <<"pointer - is a name of array\n";

    for(offset = 0; offset < 4; offset++)
        cout<<"*(bPtr + )"<<offset<<") = "
            <<*(bPtr + offset)<<'\n';

    cout<<"\nNotation of index pointer\n";

    for(i = 0; i < 4; i++)
        cout<<"bPtr["<<i<<"] = "<<bPtr[i]<<'\n';

    cout<<"\nNotation of pointer/offset\n";

    for(offset = 0; offset < 4; offset++)
        cout<<"*(bPtr + "<<offset<<") = "
            <<*(bPtr + offset)<<'\n';

    return 0;
}
