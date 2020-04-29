#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include "List.h"
#include "List.cpp"

template<class QUEUETYPE>
class Queue : private List<QUEUETYPE>
{
public:
    void enqueue(const QUEUETYPE &q){ queue.insertAtBack(q); }
    bool dequeue(QUEUETYPE &q){ return queue.removeFromFront(q); }
    bool isQueueEmpty() const { return queue.isEmpty(); }
    void printQueue() const { queue.print(); }
private:
    List<QUEUETYPE> queue;
};


#endif // QUEUE_H_INCLUDED
