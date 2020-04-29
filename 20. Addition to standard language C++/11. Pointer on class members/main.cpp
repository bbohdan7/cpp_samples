#include <iostream>
#include "Test.h"

using namespace std;

void arrowStar(Test*);
void dotStar(Test*);

int main()
{
    Test t;

    t.value = 8;
    arrowStar(&t);
    dotStar(&t);

    return 0;
}

void arrowStar(Test *tPtr)
{
    void(Test::*memPtr)() = &Test::function;
    (tPtr->*memPtr)();
}

void dotStar(Test *tPtr)
{
    int Test::*vPtr = &Test::value;
    cout<<(*tPtr).*vPtr<<endl;
}
