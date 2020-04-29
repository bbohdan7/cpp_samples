#include "List.h"
#include <iostream>
#include <cassert>

using std::cout;

template<class NODETYPE>
List<NODETYPE>::List()
    :firstPtr(0), lastPtr(0) { }

template<class NODETYPE>
List<NODETYPE>::~List()
{
    if(!isEmpty()){
        cout<<"Delete nodes...\n";

        ListNode<NODETYPE> *currentPtr = firstPtr, *tempPtr;

        while(currentPtr != 0){
            tempPtr = currentPtr;
            cout<<tempPtr->data<<'\n';
            currentPtr = currentPtr->nextPtr;
            delete tempPtr;
        }
    }
    cout<<"All nodes have been deleted\n\n";
}

template<class NODETYPE>
void List<NODETYPE>::insertAtFront(const NODETYPE &value)
{
    ListNode<NODETYPE> *newPtr = getNewNode(value);

    if(isEmpty())
        firstPtr = lastPtr = newPtr;
    else{
        newPtr->nextPtr = firstPtr;
        firstPtr = newPtr;
    }
}

template<class NODETYPE>
void List<NODETYPE>::insertAtBack(const NODETYPE &value)
{
    ListNode<NODETYPE> *newPtr = getNewNode(value);

    if(isEmpty())
        firstPtr = lastPtr = newPtr;
    else{
        lastPtr->nextPtr = newPtr;
        lastPtr = newPtr;
    }
}

template<class NODETYPE>
bool List<NODETYPE>::removeFromFront(NODETYPE &value)
{
    if(isEmpty())
        return false;
    else{
        ListNode<NODETYPE> *tempPtr = firstPtr;

        if(firstPtr == lastPtr)
            firstPtr = lastPtr = 0;
        else
            firstPtr = firstPtr->nextPtr;

        value = tempPtr->data;
        delete tempPtr;
        return true;
    }
}

template<class NODETYPE>
bool List<NODETYPE>::removeFromBack(NODETYPE &value)
{
    if(isEmpty())
        return false;
    else{
        ListNode<NODETYPE> *tempPtr = lastPtr;

        if(firstPtr == lastPtr)
            firstPtr = lastPtr = 0;
        else{
            ListNode<NODETYPE> *currentPtr = firstPtr;

            while(currentPtr->nextPtr != lastPtr)
                currentPtr = currentPtr->nextPtr;

            lastPtr = currentPtr;
            currentPtr->nextPtr = 0;
        }

        value = tempPtr->data;
        delete tempPtr;
        return true;
    }
}

template<class NODETYPE>
bool List<NODETYPE>::isEmpty() const
{
    return firstPtr == 0;
}

template<class NODETYPE>
ListNode<NODETYPE> *List<NODETYPE>::getNewNode(const NODETYPE &value)
{
    ListNode<NODETYPE> *ptr = new ListNode<NODETYPE>(value);
    assert(ptr != 0);
    return ptr;
}

template<class NODETYPE>
void List<NODETYPE>::print() const
{
    if(isEmpty()){
        cout<<"List - is empty.\n\n";
        return;
    }

    ListNode<NODETYPE> *currentPtr = firstPtr;

    cout<<"List: ";

    while(currentPtr != 0){
        cout<<currentPtr->data<<' ';
        currentPtr = currentPtr->nextPtr;
    }

    cout<<"\n\n";
}
