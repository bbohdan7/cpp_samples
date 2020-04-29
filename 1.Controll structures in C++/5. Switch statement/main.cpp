#include <iostream>
using namespace std;

int main()
{
    int grade,
        aCount = 0,
        bCount = 0,
        cCount = 0,
        dCount = 0,
        fCount = 0;

    cout<<"Enter alphabetical evaluations "<<endl
        <<" and symbol EOF for end enter."<<endl;

    while((grade = cin.get()) != 'n'){

        switch(grade){
        case 'A':
        case 'a':
            ++aCount;
        break;

        case 'B':
        case 'b':
            ++bCount;
        break;

        case 'C':
        case 'c':
            ++cCount;
        break;

        case 'D':
        case 'd':
            ++dCount;
        break;

        case 'F':
        case 'f':
            ++fCount;
        break;

        case '\n':
        case '\t':
        case ' ':
            break;

        default:
            cout<<"You've entered wrong grade, try again!"<<endl;
        break;
        }
    }

    cout<<"\n\nAmount of different grades: "
        <<"\nA: "<<aCount
        <<"\nB: "<<bCount
        <<"\nC: "<<cCount
        <<"\nD: "<<dCount
        <<"\nF: "<<fCount<<endl;

    return 0;
}
