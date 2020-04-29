#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    std::deque<double> values;
    std::ostream_iterator<double> output(cout, " ");

    values.push_front(2.2);
    values.push_front(3.5);
    values.push_back(1.1);

    cout<<"Values consists: ";

    for(int i = 0; i < values.size(); ++i)
        cout<<values[i]<<' ';

    values.pop_front();
    cout<<"\nAfter pop_front object values consists: ";
    std::copy(values.begin(), values.end(), output);

    values[1] = 5.4;
    cout<<"\nAfter values[1] = 5.4 object values consists: ";
    std::copy(values.begin(), values.end(), output);
    cout<<endl;

    return 0;
}
