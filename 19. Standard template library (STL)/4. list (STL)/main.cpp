#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

template<class T>
void printList(const std::list<T> &listRef);

int main()
{
    const int SIZE = 4;
    int a[SIZE] = { 2, 6, 4, 8 };
    std::list<int> values, otherValues;

    values.push_front(1);
    values.push_front(2);
    values.push_back(4);
    values.push_back(3);

    cout<<"Values consists: ";
    printList(values);
    values.sort();

    cout<<"\nValues after sorting consists: ";
    printList(values);

    otherValues.insert( otherValues.begin(), a, a + SIZE );
    cout<<"\nOtherValues consists: ";
    printList(otherValues);
    values.splice(values.end(), otherValues);
    cout<<"\nAfter splice, list values consists: ";
    printList(values);

    values.sort();
    cout<<"\nValues consists: ";
    printList(values);
    otherValues.insert(otherValues.begin(), a, a + SIZE);
    otherValues.sort();
    cout<<"\notherValues consists: ";
    printList(otherValues);
    values.merge(otherValues);
    cout<<"\nAfter merge:\n Values consists: ";
    printList(values);
    cout<<"\n   otherValues consists: ";
    printList(otherValues);

    values.pop_front();
    values.pop_back();
    cout<<"\nAfter pop_front and pop_back values consists:\n";
    printList(values);

    values.unique();
    cout<<"\nAfter unique list values consists: ";
    printList(values);

    values.swap(otherValues);
    cout<<"\nAfter swap:\n values consists: ";
    printList(values);
    cout<<"\n   otherValues consists: ";
    printList(otherValues);

    values.assign(otherValues.begin(), otherValues.end());
    cout<<"\nAfter assign list values consists: ";
    printList(values);

    values.merge(otherValues);
    cout<<"\nValues consists: ";
    printList(values);
    values.remove(4);
    cout<<"\nAfter remove(4) list values consists: ";
    printList(values);
    cout<<endl;

    return 0;
}

template<class T>
void printList(const std::list<T> *listRef)
{
    if(listRef.empty())
        cout<<"List is empty";
    else{
        std::ostream_iterator<T> output(cout, " ");
        std::copy(listRef.begin(), listRef.end(), output);
    }
}
