#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    const int SIZE = 10;
    int a1[SIZE] = { 1, 3, 5, 7, 9, 1, 3, 5, 7, 9 };
    std::vector<int> v1(a1, a1 + SIZE);

    std::ostream_iterator<int> output(cout, " ");

    cout<<"Vector v1 consists: ";
    std::copy(v1.begin(), v1.end(), output);

    std::inplace_merge(v1.begin(), v1.begin() + 5, v1.end());
    cout<<"\nAfter inplace_merge v1 consists: ";
    std::copy(v1.begin(), v1.end(), output);

    std::vector<int> results1;
    std::unique_copy(v1.begin(), v1.end(), std::back_inserter(results1));
    cout<<"\nAfter unique_copy results1 consists: ";
    std::copy(results1.begin(), results1.end(), output);

    std::vector<int> results2;
    cout<<"\nAfter reverse_copy results2 consists: ";
    std::reverse_copy(v1.begin(), v1.end(), std::back_inserter(results2));
    std::copy(results2.begin(), results2.end(), output);

    cout<<endl;
    return 0;
}
