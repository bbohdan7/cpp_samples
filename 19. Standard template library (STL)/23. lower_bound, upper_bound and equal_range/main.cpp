#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    const int SIZE = 10;
    int a1[SIZE] = {2, 2, 4, 4, 4, 6, 6, 6, 6, 8};
    std::vector<int> v(a1, a1 + SIZE);
    std::ostream_iterator<int> output(cout, " ");

    cout<<"Vector v consists:\n";
    std::copy(v.begin(), v.end(), output);

    std::vector<int>::iterator lower;
    lower = std::lower_bound(v.begin(), v.end(), 6);
    cout<<"\n\nLower bound for 6 - is element "<<(lower - v.begin())<<" of vector v.";

    std::vector<int>::iterator upper;
    upper = std::upper_bound(v.begin(), v.end(), 6);
    cout<<"\n\nUpper bound for 6 - is element "<<(upper - v.begin())<<" of vector v.";

    std::pair<std::vector<int>::iterator, std::vector<int>::iterator > eq;
    eq = std::equal_range(v.begin(), v.end(), 6);
    cout<<"\n\nBy using equal_range:\n"
        <<"     Lower bound for 6 - is element "<<(eq.first - v.begin())<<" of vector v";
    cout<<"\n     Upper bound for 6 - is element "<<(eq.second - v.begin())<<" of vector v";

    cout<<"\n\nLower_bound seeks first point,\n"
        <<"at which 5 can be inserted in order";
    lower = std::lower_bound(v.begin(), v.end(), 5);
    cout<<"\nLower bound for 5 - is element "<<(lower - v.begin())<<" of vector v";

    cout<<"\n\nUpper bound seeks last point,\n"
        <<"at which 7 can be inserted in order.";
    upper = std::upper_bound(v.begin(), v.end(), 7);
    cout<<"\nUpper bound for 7 - is element "<<(upper - v.begin())<<" of vector v.";

    cout<<"\n\nEqual range and last point,\n"
        <<"at which 5 can be inserted in order ";
    eq = std::equal_range(v.begin(), v.end(), 5);
    cout<<"\n   Lower bound for 5 - is element "<<(eq.first - v.begin())<<" of vector v.";
    cout<<"\n   Upper bound for 5 - is element "<<(eq.second - v.begin())<<" of vector v."<<endl;

    return 0;

}
