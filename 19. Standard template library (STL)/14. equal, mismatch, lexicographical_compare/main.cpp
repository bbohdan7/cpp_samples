#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    const int SIZE = 10;
    int a1[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int a2[SIZE] = { 1, 2, 3, 4, 1000, 6, 7, 8, 9, 10 };
    std::vector<int> v1(a1, a1 + SIZE),
                     v2(a1, a1 + SIZE),
                     v3(a2, a2 + SIZE);
    std::ostream_iterator<int> output(cout, " ");

    cout<<"Vector v1 consists: ";
    std::copy(v1.begin(), v1.end(), output);

    cout<<"\nVector v2 consists: ";
    std::copy(v2.begin(), v2.end(), output);

    cout<<"\nVector v3 consists: ";
    std::copy(v3.begin(), v3.end(), output);

    bool result = std::equal(v1.begin(), v1.end(), v2.begin());
    cout<<"\n\nVector v1"<<(result ? " is " : " is not ")<<"equal to vector v2.\n";

    result = std::equal(v1.begin(), v1.end(), v3.begin());
    cout<<"Vector v1"<<(result ? " is " : " is not ")<<"equal to vector v3.\n";

    std::pair<std::vector<int>::iterator, std::vector<int>::iterator> location;

    location = std::mismatch(v1.begin(), v1.end(), v3.begin());
    cout<<"\nThere is a mismatch v1 and v3 in "
        <<"position "<<(location.first - v1.begin())
        <<",\nwhere v1 consists "<<*location.first
        <<" and v3 consists "<<*location.second
        <<"\n\n";

    char c1[SIZE]  = "HELLO", c2[SIZE] = "BYE BYE";

    result = std::lexicographical_compare(c1, c1 + SIZE, c2, c2 + SIZE);

    cout<<c1<<(result ? " less than " : " greater or equal to ")<<c2<<endl;

    return 0;
}
