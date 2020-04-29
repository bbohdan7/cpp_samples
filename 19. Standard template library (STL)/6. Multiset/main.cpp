#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    const int SIZE = 10;
    int a[SIZE] = { 7, 22, 9, 1, 18, 30, 100, 22, 85, 13 };

    typedef std::multiset<int, std::less<int> > ims; //Pseudo-name for the type.
    ims intMultiset;
    std::ostream_iterator<int> output(cout, " ");

    cout<<"Now "<<intMultiset.count(15)
        <<" values 15 consisted in multiset\n";
    intMultiset.insert(15);
    intMultiset.insert(15);
    cout<<" After insertion "
        <<intMultiset.count(15)
        <<"values 15 consisted in multiset\n";

    ims::const_iterator result;

    result = intMultiset.find(15);

    if(result != intMultiset.end())
        cout<<"Found value 15\n";

    result = intMultiset.find(20);

    if(result == intMultiset.end())
        cout<<" not found value 20\n";

    intMultiset.insert(a, a + SIZE);
    cout<<"After insertion intMultyset consists:\n";
    std::copy(intMultiset.begin(), intMultiset.end(), output);

    cout<<"\nLower bound 22: "
        <<*(intMultiset.lower_bound(22));
    cout<<"\nUpper bound 22: "
        <<*(intMultiset.upper_bound(22));

    std::pair<ims::const_iterator, ims::const_iterator> p;

    p = intMultiset.equal_range(22);
    cout<<"\nUsing equal_range 22"
        <<"\n   Lower bound: "<<*(p.first)
        <<"\n   Upper bound: "<<*(p.second);

    cout<<endl;

    return 0;
}
