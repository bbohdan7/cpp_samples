#ifndef TREENODE_H_INCLUDED
#define TREENODE_H_INCLUDED

template<class NODETYPE> class Tree;

template<class NODETYPE>
class TreeNode
{
    friend class Tree<NODETYPE>;
public:
    TreeNode(const NODETYPE &d)
        :leftPtr(0), data(d), rightPtr(0) { }
    NODETYPE getData() const { return data; }
private:
    TreeNode<NODETYPE> *leftPtr;
    NODETYPE data;
    TreeNode<NODETYPE> *rightPtr;
};


#endif // TREENODE_H_INCLUDED
