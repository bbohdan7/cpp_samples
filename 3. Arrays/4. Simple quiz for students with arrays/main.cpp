#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int responseSize = 40, frequencySize = 11;
    int responses[responseSize] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };
    int frequency[frequencySize] = { 0 };

    for(int answer = 0; answer < responseSize; answer++)
        ++frequency[responses[answer]];

    cout<<"Rating"<<setw(17)<<"Frequency"<<endl;

    for(int rating = 1; rating < frequencySize; rating++)
        cout<<setw(6)<<rating<<setw(17)<<frequency[rating]<<endl;

    return 0;
}
