#ifndef LIST_H
#define LIST_H

#include "ListNode.h";
#include "ListNode.cpp"

template<class NODETYPE>
class List
{
    public:
        List();
        ~List();
        void insertAtFront(const NODETYPE&);
        void insertAtBack(const NODETYPE&);
        bool removeFromFront(NODETYPE&);
        bool removeFromBack(NODETYPE&);
        bool isEmpty() const;
        void print() const;

    private:
        ListNode<NODETYPE> *firstPtr;
        ListNode<NODETYPE> *lastPtr;

        ListNode<NODETYPE> *getNewNode(const NODETYPE&);
};

#endif // LIST_H
