#include "CreateAndDestroy.h"

CreateAndDestroy::CreateAndDestroy(int value)
{
    data = value;
    cout<<"Object "<<data<<" constructor";
}

CreateAndDestroy::~CreateAndDestroy()
{
    cout<<"Object "<<data<<" destructor "<<endl;
}
