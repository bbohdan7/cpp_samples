#include <iostream>
#include "CreateAndDestroy.h"

using std::cout;
using std::endl;

void create(void);

CreateAndDestroy first(1);

int main()
{
    cout<<"     (global object created before main())"<<endl;

    CreateAndDestroy second(2);
    cout<<"     (local auto in main())"<<endl;

    static CreateAndDestroy third(3);
    cout<<"     (local static in main())"<<endl;

    create();

    CreateAndDestroy fourth(4);
    cout<<"     (local auto in main())"<<endl;

    return 0;
}

void create(void)
{
    CreateAndDestroy fifth(5);
    cout<<"     (local auto in create())"<<endl;

    static CreateAndDestroy sixth(6);
    cout<<"     (local static in create())"<<endl;

    CreateAndDestroy seventh(7);
    cout<<"     (local auto in create())"<<endl;
}
