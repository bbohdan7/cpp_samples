#include <iostream>
#include <iomanip>
using namespace std;

const int students = 3;
const int exams = 4;

int minimum(int[][exams], int, int);
int maximum(int[][exams], int, int);
double average(int[], int);
void printArray(int[][exams], int, int);

int main()
{
    int studentGrades[students][exams] = { { 77, 68, 86, 73 }, { 96, 87, 89, 78 }, { 70, 90, 86, 81 } };

    cout<<"Array:\n";
    printArray(studentGrades, students, exams);
    cout<<"\n\nThe worst grade is: "<<minimum(studentGrades, students, exams)<<"\nThe best grade is: "<<maximum(studentGrades, students, exams)<<'\n';

    for(int person = 0; person < students; person++)
        cout<<"Average grades of student "<<person<<" equals to "
            <<setiosflags(ios::fixed | ios::showpoint)
            <<setprecision(2)
            <<average(studentGrades[person], exams)<<endl;

    return 0;
}

int minimum(int grades[][exams], int pupils, int tests)
{
    int lowGrade = 100;

    for(int i = 0; i < pupils; i++)
        for(int j = 0; j < tests; j++)
        if(grades[i][j] < lowGrade)
            lowGrade = grades[i][j];

    return lowGrade;
}

int maximum(int grades[][exams], int pupils, int tests)
{
    int highGrade = 0;

    for(int i = 0; i < pupils; i++)
        for(int j = 0; j < tests; j++)
            if(grades[i][j] > highGrade)
                highGrade = grades[i][j];

    return highGrade;
}

double average(int setOfGrades[], int tests)
{
    int total = 0;

    for(int i = 0; i < tests; i++)
        total += setOfGrades[i];

    return static_cast<double>(total) / tests;
}

void printArray(int grades[][exams], int pupils, int tests)
{
    cout<<"                     [0]  [1]  [2]  [3]";

    for(int i = 0; i < pupils; i++){
        cout<<"\nGrades of student ["<<i<<"] ";

        for(int j = 0; j < tests; j++)
            cout<<setiosflags(ios::fixed | ios::left)<<setw(5)
                <<grades[i][j];
    }
}
