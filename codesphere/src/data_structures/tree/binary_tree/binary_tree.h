#ifndef binary_tree_h
#define binary_tree_h

template <typename T>
class BinaryTree {
    
public:
    BinaryTree (BinaryTreeNode<T> * pRoot);
    
    BinaryTreeNode<T> * InsertLeft (BinaryTreeNode<T> *pNode, T pData);
    BinaryTreeNode<T> * InsertLeft (BinaryTreeNode<T> *pNode, BinaryTreeNode<T> * pNewNode);
    
    BinaryTreeNode<T> * InsertRight (BinaryTreeNode<T> *pNode, T pData);
    BinaryTreeNode<T> * InsertRight (BinaryTreeNode<T> *pNode, BinaryTreeNode<T> * pNewNode);
    
    void Print ();
    
    
private:
    void PrintSubTree (BinaryTreeNode<T> * pNode);
    BinaryTreeNode<T> * vRoot;
    
};

#include "binary_tree.hxx"

#endif /* binary_tree_h */
