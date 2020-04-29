#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char *string = "This is a text";
    char character1 = 'a', character2 = 'z';

    if(strchr(string, character1) != NULL)
        cout<<"'"<<character1<<"' found in '"
            <<string<<"'.\n";
    else
        cout<<"'"<<character1<<"' not found in '"
            <<string<<"'.\n";

    if(strchr(string, character2) != NULL)
        cout<<"'"<<character1<<"' found. in '"
            <<string<<"'.\n";
    else
        cout<<"'"<<character2<<"' not found in '"
            <<string<<"'."<<endl;

    return 0;
}
