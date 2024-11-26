    //
    //  recursion.cpp
    //  codesphere
    //
    //  Created by Saurabh Prakash on 12/11/24.
    //

#include <iostream>
#include <algorithm>
#include "recursion.h"
#include "binary_tree.h"

void RecursionRunner::runPrograms() {
    
    std::cout<<"********** Running recursion programs **********\n";
    std::cout<<"\nPrint numbers from 1 to N\n";
    printNTo1 (8);
    std::cout<<"\n";
    
    std::cout<<"\nPrint numbers from N to 1\n";
    print1ToN (8);
    std::cout<<"\n";
    
    std::cout<<"\nPrint the height of a binary tree\n";
    program_printHeightOfBinaryTree ();
    std::cout<<"\n";
    
    std::cout<<"\nSort an array\n";
    program_sortArray ();
    std::cout<<"\n";
    
    std::cout<<"\nSort a stack\n";
    program_sortStack ();
    std::cout<<"\n";
    
    std::cout<<"\nDelete middle element of a stack\n";
    program_deleteMiddleStackElement ();
    std::cout<<"\n";
    
    std::cout<<"\nReverse a stack\n";
    program_reverseStack ();
    std::cout<<"\n";
    
    std::cout<<"\nTower of Hanoi\n";
    program_towerOfHanoi (4);
    std::cout<<"\n";
}

void RecursionRunner::printNTo1(int n) {
    
    if (n == 0)
        return;
    
    std::cout<<n<<" ";
    
    printNTo1(n - 1);
}

void RecursionRunner::print1ToN(int n) {
    
    if (n ==0)
        return;
    
    print1ToN(n - 1);
    
    std::cout<<n<<" ";
}

void RecursionRunner::program_printHeightOfBinaryTree () {
    
    BinaryTree binary_tree(1);
    
    // Add to left right of root
    BinaryTreeNode * node_2 = binary_tree.AddLeft(binary_tree._root, 2);
    BinaryTreeNode * node_3 = binary_tree.AddRight(binary_tree._root, 3);
    
    // Add to left right of 2
    BinaryTreeNode * node_4 = binary_tree.AddLeft(node_2, 4);
    BinaryTreeNode * node_5 = binary_tree.AddRight(node_2, 5);
    
    // Add to left right of 3
    BinaryTreeNode * node_6 = binary_tree.AddLeft(node_3, 6);
    BinaryTreeNode * node_7 = binary_tree.AddRight(node_3, 7);
    
    // Add to left right of 4
    binary_tree.AddLeft(node_4, 8);
    binary_tree.AddRight(node_4, 9);
    
    // Add to left right of 5
    binary_tree.AddLeft(node_5, 10);
    binary_tree.AddRight(node_5, 11);
    
    // Add to left right of 6
    binary_tree.AddLeft(node_6, 12);
    binary_tree.AddRight(node_6, 13);
    
    // Add to left right of 7
    binary_tree.AddLeft(node_7, 14);
    binary_tree.AddRight(node_7, 15);
    
    std::cout<<heightOfBinaryTree (binary_tree._root);
}

int RecursionRunner::heightOfBinaryTree(BinaryTreeNode *root) {
    
    if (root == nullptr)
        return 0;
    
    return 1 + std::max(heightOfBinaryTree(root->_left), heightOfBinaryTree(root->_right));
}

void RecursionRunner::program_sortArray ()
{
    std::vector<int>    array{2,3,7,6,4,5,9};
    
    std::cout<<"Before sorting : ";
    for (auto num : array)
        std::cout<<num<<" ";
    
    sortArray(array, 0);
    
    std::cout<<"\nAfter sorting : ";
    for (auto num : array)
        std::cout<<num<<" ";
}

void RecursionRunner::sortArray (std::vector<int> & array, int index)
{
    if (index == (array.size () - 1))
        return;
    
    // Sort the array after current index
    sortArray (array, index + 1);
    
    // Insert the element at current index at correct position in the array
    insertIntoArray (array, index);
}

void RecursionRunner::insertIntoArray (std::vector<int> & array, int index)
{
    if (index == (array.size () - 1))
        return;

    if (array[index] > array[index + 1])
        std::swap (array[index], array[index+1]);
    
    insertIntoArray (array, index + 1);
}

void RecursionRunner::program_sortStack ()
{
    std::stack<int> s;
    
    s.push(2);
    s.push(3);
    s.push(7);
    s.push(6);
    s.push(4);
    s.push(5);
    s.push(9);
    
    std::cout<<"Before sorting : ";
    std::stack<int> temp = s;
    
    printStack(s);
    
    sortStack (s);
    
    std::cout<<"\nAfter sorting : ";
    printStack(s);
}

void RecursionRunner::sortStack(std::stack<int> & s)
{
    if (s.empty ())
        return;
    
    // Remove the topmost element
    int top = s.top ();
    s.pop ();
    
    // Sort the remaining stack
    sortStack (s);
    
    // Insert the top element at curect position in the stack;
    insertIntoStack (top, s);
}

void RecursionRunner::insertIntoStack (int ele, std::stack<int> & s)
{
    if (s.empty () || (ele > s.top ())) {
        s.push (ele);
        return;
    }
    
    int top = s.top ();
    
    s.pop ();
    insertIntoStack(ele, s);
    s.push (top);
}

void RecursionRunner::program_deleteMiddleStackElement ()
{
    std::stack<int> s;
    
    s.push (1);
    s.push (2);
    s.push (3);
    s.push (4);
    s.push (5);
    
    
    std::cout<<"Original Stack before deleting\n";
    printStack (s);
    
    deleteKthStackElement (s, ceil (s.size ()/2.0));
    
    std::cout<<"Stack after deleting middle element\n";
    printStack(s);
}

void RecursionRunner::deleteKthStackElement (std::stack<int> & s, unsigned int k)
{
    if (s.size () == k) {
        
        s.pop ();
        return;
    }

    int top = s.top ();
    s.pop ();
    deleteKthStackElement (s, k);
    s.push(top);
}

void RecursionRunner::program_reverseStack ()
{
    std::stack<int> s;
    
    s.push (1);
    s.push (2);
    s.push (3);
    s.push (4);
    s.push (5);
    
    std::cout<<"Original stack\n";
    printStack(s);
    
    reverseStack (s);
    
    std::cout<<"Reversed a stack\n";
    printStack(s);
}

void RecursionRunner::reverseStack (std::stack<int> &s)
{
    if (s.empty())
        return;
    
    int top = s.top ();
    s.pop ();
    reverseStack(s);
    insertAtStackBeginning (s, top);
}

void RecursionRunner::insertAtStackBeginning (std::stack<int> &s, int ele)
{
    if (s.empty()) {
        s.push (ele);
        return;
    }

    int top = s.top ();
    s.pop ();
    
    insertAtStackBeginning (s, ele);
    s.push (top);
}

void RecursionRunner::towerOfHanoi (int numberOfDisks, char src, char dst, char aux)
{
    if (numberOfDisks == 1) {
        std::cout<<"Moving from "<<src<<" to "<<dst<<"\n";
        return;
    }
    
    towerOfHanoi(numberOfDisks - 1, src, aux, dst);
    std::cout<<"Moving from "<<src<<" to "<<dst<<"\n";
    towerOfHanoi(numberOfDisks - 1, aux, dst, src);
}

void RecursionRunner::program_towerOfHanoi (int numberOfDisks)
{
    std::cout<<"\tNumber of disks : "<<numberOfDisks<<"\n";
    std::cout<<"\tSource          : A"<<"\n";
    std::cout<<"\tDestination     : B"<<"\n";
    std::cout<<"\tAuxiliary       : C"<<"\n";
    towerOfHanoi (numberOfDisks, 'A','B', 'C');
}

void RecursionRunner::printStack (std::stack<int> s)
{
    while (!s.empty ()) {
        
        int top = s.top ();
        s.pop ();
        std::cout<<top<<" ";
    }
    
    std::cout<<"\n";
}
