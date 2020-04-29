#include <iostream>
#include "Time.h"

using std::cout;
using std::endl;

int main()
{
    Time wakeUp(6, 45, 0);
    const Time noon(12, 0, 0);

    wakeUp.setHour(18);

    noon.setHour(12); // Const-object cannot call non-const function-member.

    wakeUp.getHour();

    noon.getMinute();
    noon.printMilitary();
    noon.printStandard();
}
