//
//  binary_tree.cpp
//  codesphere
//
//  Created by Saurabh Prakash on 12/11/24.
//

#include <stdio.h>
#include "binary_tree.h"

BinaryTreeNode::BinaryTreeNode (int val) {
    
    _val = val;
    _left = nullptr;
    _right = nullptr;
}


BinaryTree::BinaryTree (int val) {
    
    _root = new BinaryTreeNode (val);
}

BinaryTree::~BinaryTree ()
{
    deleteTree (_root);
}

void BinaryTree::deleteTree(BinaryTreeNode *root) {
    
    if (root == nullptr)
        return;
    
    deleteTree(root->_left);
    deleteTree(root->_right);
}


BinaryTreeNode * BinaryTree::AddLeft(BinaryTreeNode * of, int val) {
    
    BinaryTreeNode * new_node = new BinaryTreeNode (val);
    
    of->_left = new_node;
    
    return new_node;
}

BinaryTreeNode * BinaryTree::AddRight(BinaryTreeNode *of, int val) {
    
    BinaryTreeNode * new_node = new BinaryTreeNode (val);
    
    of->_right = new_node;
    
    return new_node;
}
