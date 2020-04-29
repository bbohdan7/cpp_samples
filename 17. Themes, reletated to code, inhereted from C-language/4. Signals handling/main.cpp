#include <iostream>
#include <iomanip>
#include <csignal>
#include <cstdlib>
#include <ctime>
using namespace std;

void signal_handler(int);

int main()
{
    signal(SIGINT, signal_handler);
    srand(time(0));

    for(int i = 1; i < 101; i++){
        int x = 1 + rand() % 50;

        if(x == 25)
            raise(SIGINT);

        cout<<setw(4)<<i;

        if(i % 10 == 0)
            cout<<endl;
    }

    return 0;
}

void signal_handler(int signalValue)
{
    cout<<"\nSignal of termination ("<<signalValue
        <<").\n"
        <<"Would you like to continue (1 - yes or 2 - no)?";

    int response;
    cin>>response;

    while(response != 1 && response != 2){
        cout<<"(1 - yes or 2 - no)?";
        cin>>response;
    }

    if(response == 1)
        signal(SIGINT, signal_handler);
    else
        exit(EXIT_SUCCESS);
}
