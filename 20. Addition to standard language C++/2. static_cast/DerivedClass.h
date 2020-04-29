#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H
#include "BaseClass.h"

class DerivedClass : public BaseClass
{
    public:
        DerivedClass();
        void f(void) const;
    private:
};

#endif // DERIVEDCLASS_H
