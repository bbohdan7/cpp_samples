#include <iostream>

#define PI 3.14159
#define CIRCLE_AREA(x) (PI *(x)*(x))

using namespace std;

int main()
{
    double area = CIRCLE_AREA(5);

    cout<<"Circle area = "<<area<<endl;

    return 0;
}
