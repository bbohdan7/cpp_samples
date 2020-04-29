#include <iostream>
#include <iomanip>
using namespace std;

void mean(const int[], int);
void median(int[], int);
void mode(int[], int[], int);
void bubbleSort(int[], int);
void printArray(const int[], int);

int main()
{
    const int responseSize = 99;
    int frequency[10] = { 0 },
        response[responseSize] = { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                                   7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
                                   6, 7, 8, 9, 3, 9, 8, 7, 9, 7,
                                   7, 8, 9, 8, 9, 8, 9, 8, 6, 8,
                                   4, 6, 4, 7, 4, 9, 7, 9, 7, 5,
                                   4, 5, 2, 5, 8, 3, 3, 2, 4, 7,
                                   3, 5, 8, 9, 9, 6, 8, 7, 7, 6,
                                   5, 6, 6, 7, 8, 9, 9, 9, 6, 5,
                                   4, 5, 6, 7, 5, 3, 3, 4, 4, 4,
                                   4, 5, 6, 4, 3, 5, 3, 2, 5};

    mean(response, responseSize);
    median(response, responseSize);
    mode(frequency, response, responseSize);

    return 0;
}

void mean(const int answer[], int arraySize)
{
    int total = 0;

    cout<<"*********\n Average \n*********\n";

    for(int j = 0; j < arraySize; j++)
        total += answer[j];

    cout<<"Average is a sum\n"
        <<"of all data elements, divided on quantity of elements\n"
        <<"of data ("<<arraySize
        <<"). Average value for \nthis launching: "
        <<total<<" / "<<arraySize<<" = "
        <<setiosflags(ios::fixed | ios::showpoint)
        <<setprecision(4)
        <<static_cast<double>(total) / arraySize<<"\n\n";
}

void median(int answer[], int size)
{
    cout<<"*********\n Median \n*********\n"
        <<"Unsorted array of answers";

    printArray(answer, size);
    bubbleSort(answer, size);
    cout<<"\n\nSorted array";
    printArray(answer, size);
    cout<<"\n\nMedian - it's element "<<size / 2<<" from array \n"<<size
        <<"of sorted elements.\nIn this launching the median equals to: "
        <<answer[size / 2]<<"\n\n";
}

void mode(int freq[], int answer[], int size)
{
    int rating, largest = 0, modeValue = 0;

    cout<<"*********\n Mode \n*********\n";

    for(rating = 1; rating <= 9; rating++)
        freq[rating] = 0;

    for(int j = 0; j < size; j++)
        ++freq[answer[j]];

    cout<<"Answer"<<setw(11)<<"Frequency"
        <<setw(19)<<"Gistogram\n\n"<<setw(55)
        <<"1    1   2   2\n"<<setw(55)
        <<"5    0   5   0   5\n\n";

    for(rating = 1; rating <= 9; rating++){
        cout<<setw(8)<<rating<<setw(11)
            <<freq[rating]<<"           ";

            if(freq[rating] > largest){
                largest = freq[rating];
                modeValue = rating;
            }

            for(int h = 1; h <= freq[rating]; h++)
                cout<<'*';

            cout<<'\n';
    }
    cout<<"Mode - it's the most frequent value.\n"
        <<"For given calculation mode is equal "<<modeValue
        <<", it's number the most encountered "<<largest<<" times."<<endl;
}

void bubbleSort(int a[], int size)
{
    int hold;

    for(int pass = 1; pass < size; pass++)
        for(int j = 0; j < size; j++)
            if(a[j] > a[j + 1]){
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
}

void printArray(const int a[], int size)
{
    for(int j = 0; j < size; j++){
        if(j % 20 == 0)
            cout<<endl;

        cout<<setw(2)<<a[j];
    }
}


