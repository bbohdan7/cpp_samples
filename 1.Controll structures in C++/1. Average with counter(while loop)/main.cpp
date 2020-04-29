#include <iostream>

using namespace std;

int main()
{
    int total,
        gradeCounter,
        grade,
        average;

    total = 0;
    gradeCounter = 1;

    while(gradeCounter <= 10){
        cout<<"Enter grade: ";
        cin>>grade;
        total = total + grade;
        gradeCounter = gradeCounter + 1;
    }

    average = total / 10;
    cout<<"Average grade equals to: "<<average<<endl;

    return 0;
}
