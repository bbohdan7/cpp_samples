#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

bool greater10(int);

int main()
{
    const int SIZE = 10;
    int a[SIZE] = { 10, 2, 17, 5, 16, 8, 13, 11, 20 ,7 };
    std::vector<int> v(a, a + SIZE);
    std::ostream_iterator<int> output(cout, " ");

    cout<<"Vector v consists: ";
    std::copy(v.begin(), v.end(), output);

    std::vector<int>::iterator location;
    location = std::find(v.begin(), v.end(), 16);

    if(location != v.end())
        cout<<"\n\nFound 16 in position "<<(location - v.begin());
    else
        cout<<"\n\n16 not found";

    location = std::find(v.begin(), v.end(), 100);

    if(location != v.end())
        cout<<"\n\nFound 100 in position "<<(location - v.begin());
    else
        cout<<"\n\n100 not found";

    location = std::find_if(v.begin(), v.end(), greater10);

    if(location != v.end())
        cout<<"\n\nFirst value greater than 10 is "<<*location<<"\nfound in position "<<(location - v.begin());
    else
        cout<<"\n\nValues not found greater than 10";

    std::sort(v.begin(), v.end());
    cout<<"\n\nVector v after sorting: ";
    std::copy(v.begin(), v.end(), output);

    if(std::binary_search(v.begin(), v.end(), 13))
        cout<<"\n\n13 found in v";
    else
        cout<<"\n\n13 not found in v";

    if(std::binary_search(v.begin(), v.end(), 100))
        cout<<"\n100 found in v";
    else
        cout<<"\n100 not found in v.";

    cout<<endl;
    return 0;
}

bool greater10(int x)
{
    return x > 10;
}
