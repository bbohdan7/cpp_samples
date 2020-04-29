#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    const int SIZE = 10;
    int a[SIZE] = { 3, 100, 52, 77, 22, 31, 1, 98, 13, 40 };
    int i;
    std::vector<int> v(a, a + SIZE), v2;
    std::ostream_iterator<int> output(cout, " ");

    cout<<"Vector v before calling make_heap:\n";
    std::copy(v.begin(), v.end(), output);
    std::make_heap(v.begin(), v.end());
    cout<<"\nVector v after calling make_heap:\n";
    std::copy(v.begin(), v.end(), output);
    std::sort_heap(v.begin(), v.end());

    cout<<"\n\nArray a consists: ";
    std::copy(a, a + SIZE, output);

    for(i = 0; i < SIZE; ++i){
        v2.push_back(a[i]);
        std::push_heap(v2.begin(), v2.end());
        cout<<"\nv2 after calling push_heap(a[" << i << "]): ";
        std::copy(v2.begin(), v2.end(), output);
    }

    for(i = 0; i < v2.size(); ++i){
        cout<<"\nv2 after popping " << v2[ 0 ] << " from the heap\n";
        std::pop_heap(v2.begin(), v2.end() - i);
        std::copy(v2.begin(), v2.end(), output);
    }

    cout<<endl;
    return 0;

}
