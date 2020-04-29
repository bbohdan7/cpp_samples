#ifndef LISTNODE_H
#define LISTNODE_H

template<class NODETYPE> class List;

template<class NODETYPE>
class ListNode
{
    friend class List<NODETYPE>;
    public:
        ListNode(const NODETYPE&);
        NODETYPE getData() const;

    private:
        NODETYPE data;
        ListNode<NODETYPE> *nextPtr;
};

#endif // LISTNODE_H
