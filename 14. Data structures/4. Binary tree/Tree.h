#ifndef TREE_H
#define TREE_H

#include "treenode.h"

template<class NODETYPE>
class Tree
{
    public:
        Tree();
        void insertNode(const NODETYPE&);
        void preOrderTraversal() const;
        void inOrderTraversal() const;
        void postOrderTraversal() const;

    private:
        TreeNode<NODETYPE> *rootPtr;

        //Utility - functions
        void insertNodeHelper(TreeNode<NODETYPE>**, const NODETYPE&);
        void preOrderHelper(TreeNode<NODETYPE>*) const;
        void inOrderHelper(TreeNode<NODETYPE>*) const;
        void postOrderHelper(TreeNode<NODETYPE>*) const;
};

#endif // TREE_H
