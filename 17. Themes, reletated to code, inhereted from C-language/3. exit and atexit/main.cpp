#include <iostream>
#include <cstdlib>
using namespace std;

void print(void);

int main()
{
    atexit(print);

    cout<<"Enter 1 for terminate the program with function 'exit'"
        <<"\nEnter 2 for normal program termination\n";

    int answer;
    cin>>answer;

    if(answer == 1){
        cout<<"\nTermination of program with function exit\n";
        exit(EXIT_SUCCESS);
    }

    cout<<"\nOrdinary program termination"<<endl;

    return 0;
}

void print(void)
{
    cout<<"Execution of print with program termination\n"
        <<"Program is terminated."<<endl;
}
