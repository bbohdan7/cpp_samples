#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    typedef std::set<double, std::less<double> > double_set;

    const int SIZE = 5;
    double a[SIZE] = { 2.1, 4.2, 9.5, 2.1, 3.7 };
    double_set doubleSet(a, a + SIZE);
    std::ostream_iterator<double> output(cout, " ");

    cout<<"doubleSet consists: ";
    std::copy(doubleSet.begin(), doubleSet.end(), output);

    std::pair<double_set::const_iterator, bool> p;
    p = doubleSet.insert(13.8);
    cout<<'\n'<<*(p.first)
        <<(p.second ? " has been" : " has not been")<<" inserted";
    cout<<"\ndoubleSet consists: ";
    std::copy(doubleSet.begin(), doubleSet.end(), output);

    p = doubleSet.insert(9.5);
    cout<<'\n'<<*(p.first)
        <<(p.second ? " has been" : " has not been")<<" inserted";
    cout<<"\ndoubleSet consists: ";
    std::copy(doubleSet.begin(), doubleSet.end(), output);

    cout<<endl;

    return 0;
}
