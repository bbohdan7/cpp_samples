#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cout<<"Minimum 12 and 7: "
        <<std::min(12, 7);
    cout<<"\nMaximum 12 and 7: "
        <<std::max(12, 7);
    cout<<"\nMinimum 'G' and 'Z': "
        <<std::min('G', 'Z');
    cout<<"\nMaximum 'G' and 'Z': "
        <<std::max('G', 'Z');

    return 0;
}
