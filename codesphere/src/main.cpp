#include <iostream>
#include "main.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
        // Binary Tree of 'integers'
    BinaryTreeNode<int> * int_rootnode = new BinaryTreeNode<int>(1);
    BinaryTree<int> int_bt(int_rootnode);
    
    int_bt.InsertLeft(int_rootnode, 2);
    int_bt.InsertRight(int_rootnode, 3);
    
    std::cout << "Print the Binary Tree of Integers....\n";
    int_bt.Print();
    
        // Binary Tree of 'integers'
    BinaryTreeNode<string> * str_rootnode = new BinaryTreeNode<string>("Bruno");
    BinaryTree<string> str_bt(str_rootnode);
    
    
    str_bt.InsertLeft(str_rootnode, "Good");
    str_bt.InsertRight(str_rootnode, "Boy");
    
    std::cout << "\n\nPrint the Binary Tree of String....\n";
    str_bt.Print();
    
    return 0;
}
