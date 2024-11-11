//
//  binary_tree.h
//  codesphere
//
//  Created by Saurabh Prakash on 12/11/24.
//

#ifndef binary_tree_h
#define binary_tree_h

class BinaryTreeNode {

public:
    BinaryTreeNode (int val);
    
    int                 _val;
    BinaryTreeNode *    _left;
    BinaryTreeNode *    _right;
};

class BinaryTree {
    
public:
    BinaryTree (int val);
    ~BinaryTree    ();
    
    BinaryTreeNode *    AddLeft (BinaryTreeNode * of, int val);
    BinaryTreeNode *    AddRight (BinaryTreeNode * of, int val);
    
    BinaryTreeNode *    _root;
    
private:
    void deleteTree (BinaryTreeNode * root);
    
};

#endif /* binary_tree_h */
