#include <iostream>
#include <vector>
using namespace std;


template<class T>
void printVector(const std::vector<T> &vec)
{
    std::vector<T>::const_iterator p1;

    for(p1 = vec.begin(); p1 != vec.end(); p1++)
        cout<<*p1<<' ';
}

int main()
{
    const int SIZE = 6;
    int a[SIZE] = { 1, 2, 3, 4, 5, 6 };
    std::vector<int> v;

    cout<<"Initial size of vector v: "<<v.size()
        <<"\nInitial capacity: "<<v.capacity();

    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout<<"\nSize of vector v: "<<v.size()
        <<"\nCapacity of vector v: "<<v.capacity();
    cout<<"\n\nConsist a (with pointers): ";

    for(int *ptr = a; ptr != a + SIZE; ++ptr)
        cout<<*ptr<<' ';

    cout<<"\n\nConsist v (with iterators): ";
    printVector(v);

    cout<<"\nVector v in reverse order: ";

    std::vector<int>::reverse_iterator p2;

    for(p2 = v.rbegin(); p2 != v.rend(); ++p2)
        cout<<*p2<<' ';

    cout<<endl;

    return 0;
}


