#include <iostream>
#include "queue.h"

using std::cout;
using std::endl;

int main()
{
    Queue<int> intQueue;
    int dequeueInteger, i;
    cout<<"Handling queue with integer-values"<<endl;

    for(i = 0; i < 4; i++){
        intQueue.enqueue(i);
        intQueue.printQueue();
    }

    while(!intQueue.isQueueEmpty()){
        intQueue.dequeue(dequeueInteger);
        cout<<dequeueInteger<<" has been deleted from queue"<<endl;
        intQueue.printQueue();
    }
}
