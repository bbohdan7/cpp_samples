#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 80;
    char buffer1[SIZE], buffer2[SIZE];

    cout<<"Enter sentence:\n";
    cin>>buffer1;
    cout<<"\nString was read with cin:\n"
        <<buffer1<<"\n\n";
    cin.get(buffer2, SIZE);
    cout<<"String was read with cin:\n"
        <<buffer2<<endl;

    return 0;
}
