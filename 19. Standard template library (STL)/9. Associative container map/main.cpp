#include <iostream>
#include <map>
using namespace std;

int main()
{
    typedef std::map<int, double, std::less<int> > mid;
    mid pairs;

    pairs.insert(mid::value_type(15, 2.7));
    pairs.insert(mid::value_type(30, 111.11));
    pairs.insert(mid::value_type(5, 1010.1));
    pairs.insert(mid::value_type(10, 22.22));
    pairs.insert(mid::value_type(25, 33.33));
    pairs.insert(mid::value_type(5, 77.54));
    pairs.insert(mid::value_type(20, 9.345));
    pairs.insert(mid::value_type(15, 99.3));

    cout<<"Pairs consists:\nKey\tValue\n";
    mid::const_iterator iter;

    for(iter = pairs.begin(); iter != pairs.end(); ++iter)
        cout<<iter->first<<'\t'
            <<iter->second<<'\n';

    pairs[25] = 9999.99;
    pairs[40] = 8765.43;

    cout<<"\nAfter handling pairs consists: "
        <<"\nKey\tValue\n";

    for(iter = pairs.begin(); iter != pairs.end(); ++iter)
        cout<<iter->first<<'\t'
            <<iter->second<<'\n';

    cout<<endl;

    return 0;
}
