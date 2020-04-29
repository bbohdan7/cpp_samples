#include "ListNode.h"

template<class NODETYPE>
ListNode<NODETYPE>::ListNode(const NODETYPE &info)
    :data(info), nextPtr(0) { }

template<class NODETYPE>
NODETYPE ListNode<NODETYPE>::getData() const
{
    return data;
}
