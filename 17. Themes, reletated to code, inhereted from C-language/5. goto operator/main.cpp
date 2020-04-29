#include <iostream>

using namespace std;

int main()
{
    int count = 1;

    start:
        if(count > 10)
            goto end;

        cout<<count<<"  ";
        ++count;
        goto start;

    end:
        cout<<endl;

    return 0;
}
