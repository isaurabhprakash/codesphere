#ifndef binary_tree_hxx
#define binary_tree_hxx

#include "tree.h"

template <typename T>
BinaryTree<T>::BinaryTree (BinaryTreeNode<T> * pRoot)
{
    vRoot = pRoot;
}

template <typename T>
BinaryTreeNode<T> * BinaryTree<T>::InsertLeft (BinaryTreeNode<T> *pNode, T pData)
{
    return pNode->InsertLeft(pData);
}

template <typename T>
BinaryTreeNode<T> * BinaryTree<T>::InsertLeft (BinaryTreeNode<T> *pNode, BinaryTreeNode<T> * pNewNode)
{
    return pNode->InsertLeft(pNewNode);
}

template <typename T>
BinaryTreeNode<T> * BinaryTree<T>::InsertRight (BinaryTreeNode<T> *pNode, T pData)
{
    return pNode->InsertRight(pData);
}

template <typename T>
BinaryTreeNode<T> * BinaryTree<T>::InsertRight (BinaryTreeNode<T> *pNode, BinaryTreeNode<T> * pNewNode)
{
    return pNode->InsertRight(pNode);
}

template <typename T>
void BinaryTree<T>::Print ()
{
    std::cout<<"\nPrinting the Binary Tree...\n";
    
    PrintSubTree (vRoot);
}

template <typename T>
void BinaryTree<T>::PrintSubTree (BinaryTreeNode<T> * pNode)
{
    if (!pNode) {
        
        return;
    }
    
    std::cout<<"\n\n---------------------------------------------------------------------\n";
    std::cout<<"---------------------------------------------------------------------\n";
    std::cout<<"                     Current Element : "<<pNode->uData<<"\n";
    
    if (pNode->uLeft) {
        std::cout<<"Left Child: "<<pNode->uLeft->uData;
    } else {
        std::cout<<"Left Child: (null)";
    }
    
    if (pNode->uRight) {
            
        std::cout<<"                                 Right Child: "<<pNode->uRight->uData<<"\n";
    } else {
        std::cout<<"                                 Right Child: (null)\n";
    }
    
    PrintSubTree(pNode->uLeft);
    PrintSubTree(pNode->uRight);
    
}

#endif /* binary_tree_hxx */
