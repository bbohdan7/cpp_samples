#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

bool greater9(int);

int main()
{
    const int SIZE = 10;
    int a[SIZE] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };
    std::ostream_iterator<int> output(cout, " ");

    std::vector<int> v(a, a + SIZE);
    std::vector<int>::iterator newLastElement;

    cout<<"Vector v before removing all 10:\n";
    std::copy(v.begin(), v.end(), output);
    newLastElement = std::remove(v.begin(), v.end(), 10);
    cout<<"\nVector v after removing all 10:\n";
    std::copy(v.begin(), newLastElement, output);

    std::vector<int> v2(a, a + SIZE);
    std::vector<int> c(SIZE, 0);

    cout<<"\n\nVector v2 before removing all 10 and copying:\n";
    std::copy(v2.begin(), v2.end(), output);
    std::remove_copy(v2.begin(), v2.end(), c.begin(), 10);
    cout<<"\nVector c after removing all 10 from v2:\n";
    std::copy(c.begin(), c.end(), output);

    std::vector<int> v3(a, a + SIZE);
    cout<<"\n\nVector v3 before removing all elements, greater than 9:\n";
    std::copy(v3.begin(), v3.end(), output);
    newLastElement = std::remove_if(v3.begin(), v3.end(), greater9);

    cout<<"\nVector v3 after removing all elements, \ngreater that 9:\n";
    std::copy(v3.begin(), newLastElement, output);

    std::vector<int> v4(a, a + SIZE);
    std::vector<int> c2(SIZE, 0);

    cout<<"\n\nVector v4 before removing all elements, greater than 9 and copying:\n";

    std::copy(v4.begin(), v4.end(), output);
    std::remove_copy_if(v4.begin(), v4.end(), c2.begin(), greater9);

    cout<<"\nVector c2 after removing all elements, greater than 9 from v4:\n";
    std::copy(c2.begin(), c2.end(), output);

    cout<<endl;
    return 0;

}

bool greater9(int x)
{
    return x > 9;
}
