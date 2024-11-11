    //
    //  recursion.cpp
    //  codesphere
    //
    //  Created by Saurabh Prakash on 12/11/24.
    //

#include <iostream>
#include "recursion.h"

void RecursionRunner::runPrograms() {
    
    std::cout<<"\nPrint numbers from 1 to N\n";
    printNTo1 (8);
    
    std::cout<<"\nPrint numbers from N to 1\n";
    print1ToN (8);
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

