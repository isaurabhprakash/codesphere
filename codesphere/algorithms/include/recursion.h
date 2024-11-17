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
    
    void program_sortArray ();
    void sortArray (std::vector<int> & array, int index);
    void insertIntoArray (std::vector<int> & array, int index);
    
    void program_sortStack ();
    void sortStack (std::stack<int> & s);
    void insertIntoStack (int ele, std::stack<int> & s);
    
    void program_deleteMiddleStackElement ();
    void deleteKthStackElement (std::stack<int> & s, unsigned int k);
    
    void program_reverseStack ();
    void reverseStack (std::stack<int> & s);
    void insertAtStackBeginning (std::stack<int> & s, int ele);
    
    // helper functions
    void printStack (std::stack<int> s);

};

#endif /* recursion_h */

