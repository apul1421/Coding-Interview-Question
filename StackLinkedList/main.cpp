//
//  main.cpp
//  StackLinkedList
//
//  Created by Apul Gupta on 15/08/17.
//  Copyright © 2017 Apul Gupta. All rights reserved.
//

#include <iostream>
using namespace std;

class StackUnderFlowException{
public:
    StackUnderFlowException(){
        cout<<"Stack UnderFlow";
    }
};

struct Node{
 
    int data;
    Node* link;
};

class ListStack{
 
private:
    Node* top;
    int count;
    
public:
    ListStack()
    {
        top = NULL;
        count=0;
    }
    
    
    
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
