#include <iostream>

using namespace std;

int main()
{
    int passes = 0,
        failures = 0,
        studentCounter = 1,
        result;

    while(studentCounter <= 10){
        cout<<"Enter results (1-passed, 2-failed)";
        cin>>result;

        if(result == 1)
            passes = passes + 1;
        else
            failures = failures + 1;

        studentCounter = studentCounter + 1;
    }

    cout<<"You've passed"<<passes<<endl;
    cout<<"You've failed"<<failures<<endl;

    if(passes > 8)
        cout<<" Raise fee for education "<<endl;

    return 0;
}
