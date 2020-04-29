#include <iostream>
#include <iomanip>

#include "Tree.h"
#include "Tree.cpp"

using std::cout;
using std::cin;
using std::setiosflags;
using std::ios;
using std::setprecision;

int main()
{
    Tree<int> intTree;
    int intVal, i;

    cout<<"Enter 10 integer-values:\n";

    for(i = 0; i < 10; i++){
        cin>>intVal;
        intTree.insertNode(intVal);
    }

    cout<<"\nPre-order traversal\n";
    intTree.preOrderTraversal();

    cout<<"\nIn-order traversal";
    intTree.inOrderTraversal();

    cout<<"\nPost-order traversal\n";
    intTree.postOrderTraversal();
}
