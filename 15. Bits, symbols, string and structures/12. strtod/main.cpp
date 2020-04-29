#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double d;
    const char *string = "51.2% are admitted";
    char *stringPtr;

    d = strtod(string, &stringPtr);

    cout<<"String '"<<string
        <<"' converted to double-value "
        <<d<<" and string '"<<stringPtr<<"'"<<endl;

    return 0;
}
