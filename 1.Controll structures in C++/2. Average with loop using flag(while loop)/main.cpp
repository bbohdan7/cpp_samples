#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int total,
        gradeCounter,
        grade;
    double average;

    total = 0;
    gradeCounter = 0;

    cout<<"Enter grade or -1 to terminate: ";
    cin>>grade;

    while(grade != -1){
        total = total + grade;
        gradeCounter = gradeCounter + 1;
        cout<<"Enter grade or -1 to terminate: ";
        cin>>grade;
    }

    if(gradeCounter != 0){
        average = static_cast<double>(total) / gradeCounter;
        cout<<"Average grade is: "<<setprecision(2)
            <<setiosflags(ios::fixed | ios::showpoint)
            <<average<<endl;
    }
    else
        cout<<"There are no grades!"<<endl;

    return 0;
}
