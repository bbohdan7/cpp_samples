#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    cout<<"Enter two integers: ";

    std::istream_iterator<int> inputInt(cin);
    int number1, number2;

    number1 = *inputInt;
    ++inputInt;
    number2 = *inputInt;

    cout<<"Sum is: ";

    std::ostream_iterator<int> outputInt(cout);

    *outputInt = number1 + number2;
    cout<<endl;

    return 0;
}
