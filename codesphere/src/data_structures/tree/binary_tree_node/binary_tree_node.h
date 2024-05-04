#ifndef binary_tree_node_h
#define binary_tree_node_h

template <typename T>
class BinaryTreeNode {
    
public:
    BinaryTreeNode<T>   (T pData);
    BinaryTreeNode<T>   (T pData, BinaryTreeNode<T> * pLeft, BinaryTreeNode<T> * pRight);
    
    BinaryTreeNode<T> *    InsertLeft (T pData);
    BinaryTreeNode<T> *    InsertLeft (BinaryTreeNode<T> * pNode);
    
    BinaryTreeNode<T> *    InsertRight (T pData);
    BinaryTreeNode<T> *    InsertRight (BinaryTreeNode<T> * pNode);
    
    T   uData;
    BinaryTreeNode<T> * uLeft;
    BinaryTreeNode<T> * uRight;
};

#include "binary_tree_node.hxx"

#endif /* binary_tree_node_h */
