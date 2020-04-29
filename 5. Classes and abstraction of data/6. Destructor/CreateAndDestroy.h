#ifndef CREATEANDDESTROY_H
#define CREATEANDDESTROY_H
#include <iostream>

using std::cout;
using std::endl;

class CreateAndDestroy
{
    public:
        CreateAndDestroy(int);
        ~CreateAndDestroy();
    private:
        int data;
};

#endif // CREATEANDDESTROY_H
