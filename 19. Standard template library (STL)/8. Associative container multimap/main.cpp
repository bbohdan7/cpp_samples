#include <iostream>
#include <map>
using namespace std;

int main()
{
    typedef std::multimap<int, double, std::less<int> > mmid;
    mmid pairs;

    cout<<"Now "<<pairs.count(15)
        <<" pairs with 15 key in multimap\n";

    pairs.insert(mmid::value_type(15, 2.7));
    pairs.insert(mmid::value_type(15, 99.3));

    cout<<"After insertion "
        <<pairs.count(15)
        <<" pairs with 15 key\n";

    pairs.insert(mmid::value_type(30, 111.11));
    pairs.insert(mmid::value_type(10, 22.22));
    pairs.insert(mmid::value_type(25, 33.333));
    pairs.insert(mmid::value_type(20, 9.345));
    pairs.insert(mmid::value_type(5, 77.54));

    cout<<"Multimap pairs consists:\nKey\tValue\n";

    for(mmid::const_iterator iter = pairs.begin(); iter != pairs.end(); ++iter)
        cout<<iter->first<<'\t'
            <<iter->second<<'\n';

    cout<<endl;

    return 0;
}
