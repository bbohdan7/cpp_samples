#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <iterator>
using namespace std;

bool greater9(int);
void outputSquare(int);
int calculateCube(int);

int main()
{
    const int SIZE = 10;
    int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::vector<int> v(a1, a1 + SIZE);
    std::ostream_iterator<int> output(cout, " ");

    cout<<"Vector v before calling random_shuffle: ";
    std::copy(v.begin(), v.end(), output);
    std::random_shuffle(v.begin(), v.end());
    cout<<"\nVector v after calling: ";
    std::copy(v.begin(), v.end(), output);

    int a2[] = { 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
    std::vector<int> v2(a2, a2 + SIZE);
    cout<<"\nVector v2 consists: ";
    std::copy(v2.begin(), v2.end(), output);

    int result = std::count(v2.begin(), v2.end(), 8);
    cout<<"\nNumber of elements coincided with 8: "<<result;

    result = std::count_if(v2.begin(), v2.end(), greater9);
    cout<<"\nNumber of elements, greater than 9: "<<result;

    cout<<"\n\nMinimal element in v2: "<<*(std::min_element(v2.begin(), v2.end()));
    cout<<"\n\nMaximal element in v2: "<<*(std::max_element(v2.begin(), v2.end()));
    cout<<"\n\nSum of elements of vector v: "<<std::accumulate(v.begin(), v.end(), 0);
    cout<<"\n\nSquare of each element of vector v:\n";
    std::for_each(v.begin(), v.end(), outputSquare);

    std::vector<int> cubes(SIZE);
    std::transform(v.begin(), v.end(), cubes.begin(), calculateCube);
    cout<<"\n\nCube of each elements v:\n";
    std::copy(cubes.begin(), cubes.end(), output);

    cout<<endl;
    return 0;
}

bool greater9(int value)
{
    return value > 9;
}

void outputSquare(int value)
{
    cout<<value * value<<' ';
}

int calculateCube(int value)
{
    return value * value * value;
}
