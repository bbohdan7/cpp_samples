#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("The values in any left subtree \nare less than the value in the \nparent node and the values in \nany right subtree are greater \nthan the value in the parent node");

    s.erase(62);

    cout<<"Ingoing string after using of erase:\n"<<s
        <<"\n\nafter first replacement:\n";

    int x = s.find(" ");
    while(x < string::npos){
        s.replace(x, 1, ".");
        x = s.find(" ", x + 1);
    }

    cout<<s<<"\n\nAfter second replacement:\n";

    x = s.find(".");
    while(x < string::npos){
        s.replace(x, 2, "xxxx;;yyy", 5, 2);
        x = s.find(".", x + 1);
    }

    cout<<s<<endl;

    return 0;
}
