#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    const int SIZE = 5;
    int a1[SIZE] = {1, 3, 5, 7, 9};
    int a2[SIZE] = {2, 4, 5, 7, 9};
    std::vector<int> v1(a1, a1 + SIZE);
    std::vector<int> v2(a2, a2 + SIZE);

    std::ostream_iterator<int> output(cout, " ");

    cout<<"Vector v1 consists: ";
    std::copy(v1.begin(), v1.end(), output);
    cout<<"\nVector v2 consists: ";
    std::copy(v2.begin(), v2.end(), output);

    std::vector<int> results(v1.size());
    std::copy_backward(v1.begin(), v1.end(), results.end());
    cout<<"\n\nAfter copy_backward results consists: ";
    std::copy(results.begin(), results.end(), output);

    std::vector<int> results2(v1.size() + v2.size());
    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), results2.begin());
    cout<<"\n\nAfter merge with v1 and v2 results2 consists:\n";
    std::copy(results2.begin(), results2.end(), output);

    std::vector<int>::iterator endLocation;
    endLocation = std::unique(results2.begin(), results2.end());
    cout<<"\n\nAfter unique results2 consists: ";
    std::copy(results2.begin(), results2.end(), output);

    cout<<"\n\nVector v1 after reverse: ";
    std::reverse(v1.begin(), v1.end());
    std::copy(v1.begin(), v1.end(), output);

    cout<<endl;
    return 0;

}
