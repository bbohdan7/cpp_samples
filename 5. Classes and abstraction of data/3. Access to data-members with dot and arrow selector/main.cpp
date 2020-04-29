#include <iostream>

using namespace std;

/*** DANGEROUS!!! DATA-MEMBERS CANNOT BE A PUBLIC ONES!!! ONLY EDUCATIONAL PURPOSES!!!***/
class Count{
public:
    int x; //dangerous data-member!!!
    void print(){cout<<x<<endl;}
};

int main()
{
    Count counter,
        *counterPtr = &counter,
        &counterRef = counter;

    cout<<"Assigning x value 7 and printing with name of object: ";
    counter.x = 7;
    counter.print();

    cout<<"Assigning x value 8 and printing with reference of object: ";
    counterRef.x = 8;
    counterRef.print();

    cout<<"Assigning x value 10 and printing with pointer of object: ";
    counterPtr->x = 10;
    counterPtr->print();

    return 0;
}
