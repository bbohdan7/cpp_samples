#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    const int SIZE = 10;
    int a[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::ostream_iterator<int> output(cout, " ");

    cout<<"Array a consists:\n";
    std::copy(a, a + SIZE, output);

    std::swap(a[0], a[1]);
    cout<<"\nArray a after swapping a[0] and a[1]"<<" function swap:\n";
    std::copy(a, a + SIZE, output);

    std::iter_swap(&a[0], &a[1]);
    cout<<"\nArray a after swapping a[0] and a[1]"<<" with function iter_swap:\n";
    std::copy(a, a + SIZE, output);

    std::swap_ranges(a, a + 5, a + 5);
    cout<<"\nArray a after swapping first five elements with last five elements:\n";
    std::copy(a, a + SIZE, output);

    cout<<endl;
    return 0;
}
