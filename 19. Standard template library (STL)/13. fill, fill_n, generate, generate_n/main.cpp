#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

char nextLetter();

int main()
{
    std::vector<char> chars(10);
    std::ostream_iterator<char> output(cout, " ");

    std::fill(chars.begin(), chars.end(), '5');
    cout<<"Vector chars after filling with value 5:\n";
    std::copy(chars.begin(), chars.end(), output);

    std::fill_n(chars.begin(), 5, 'A');
    cout<<"\nVector chars after filling five elements with symbols A:\n";
    std::copy(chars.begin(), chars.end(), output);

    std::generate(chars.begin(), chars.end(), nextLetter);
    cout<<"\nVector chars after generation symbols A-J:\n";
    std::copy(chars.begin(), chars.end(), output);

    std::generate_n(chars.begin(), 5, nextLetter);
    cout<<"\nVector chars after generation K-O for first five elements:\n";
    std::copy(chars.begin(), chars.end(), output);

    cout<<endl;
    return 0;
}

char nextLetter()
{
    static char letter = 'A';
    return letter++;
}
