#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stdexcept>
using namespace std;

int main()
{
    const int SIZE = 6;
    int a[SIZE] = { 1, 2, 3, 4, 5, 6 };
    std::vector<int> v(a, a + SIZE);
    std::ostream_iterator<int> output(cout, " ");
    cout<<"Vector v consists: ";
    std::copy(v.begin(), v.end(), output);

    std::cout<<"\nFirst element of vector v: "<<v.front()
        <<"\nLast element of vector v: "<<v.back();

    v[0] = 7;
    v.at(2) = 10;
    v.insert(v.begin() + 1, 22);
    cout<<"\nVector v after changes: ";
    std::copy(v.begin(), v.end(), output);

    try{
        v.at(100) = 777;
    }
    catch(std::out_of_range e){
        cout<<"\nException: "<<e.what();
    }

    v.erase(v.begin());
    cout<<"\nContent v after using erase: ";
    copy(v.begin(), v.end(), output);
    v.erase(v.begin(), v.end());

    cout<<"\nAfter erase vector v "
        <<(v.empty() ? " - is " : " - is not ")<<" empty";

    v.insert(v.begin(), a, a + SIZE);
    cout<<"\nVector v before using clear: ";
    copy(v.begin(), v.end(), output);
    v.clear();
    cout<<"\nAfter clear vector v "
        <<(v.empty() ? " - is " : " - is not ")<<" empty";

    cout<<endl;

    return 0;
}
