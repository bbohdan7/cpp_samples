#include <iostream>

#include "PhoneNumber.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    PhoneNumber phone;

    cout<<"Enter telephone number like (123) 456-7890:\n";

    cin>>phone;

    cout<<" Number has been entered: "<<phone<<endl;

    return 0;
}
