    //
    //  recursion.h
    //  codesphere
    //
    //  Created by Saurabh Prakash on 12/11/24.
    //

#ifndef recursion_h
#define recursion_h

class BinaryTreeNode;

class RecursionRunner {
    
public:
    static RecursionRunner & getInstance () {
        
        static RecursionRunner instance;
        return instance;
    }
    
    void runPrograms ();
    
private:
    RecursionRunner () {};
    
    RecursionRunner (const RecursionRunner &) = delete;
    RecursionRunner & operator=(const RecursionRunner &) = delete;
    
    void printNTo1 (int n);
    void print1ToN (int n);
    
    void program_printHeightOfBinaryTree ();
    int  heightOfBinaryTree (BinaryTreeNode * root);
};

#endif /* recursion_h */

