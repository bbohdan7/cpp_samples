#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <iterator>
using namespace std;

int sumSquares(int total, int value)
{
    return total + value * value;
}

template<class T>
class SumSquaresClass : public std::binary_function<T, T, T>
{
public:
    const T operator() (const T &total, const T &value){ return total + value * value; }
};

int main()
{
    const int SIZE = 10;
    int a1[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v(a1, a1 + SIZE);
    ostream_iterator<int> output(cout, " ");
    int result = 0;

    cout<<"Vector v consists: ";
    copy(v.begin(), v.end(), output);
    result = accumulate(v.begin(), v.end(), 0, sumSquares);
    cout<<"\n\nSum of squares of elements v with using: "
        <<"binary function 'sumSquare': "<<result;

    result = accumulate(v.begin(), v.end(), 0, SumSquaresClass<int>());

    cout<<"\n\nSum of squares of elements v with using: "
        <<"binary function - object of type 'SumSquaresClass<int>': "<<result<<endl;

    return 0;
}
