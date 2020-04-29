#include "TestMutable.h"

TestMutable::TestMutable(int v)
{
    value = v;
}

void TestMutable::modifyValue() const
{
    value++;
}

int TestMutable::getValue() const
{
    return value;
}
