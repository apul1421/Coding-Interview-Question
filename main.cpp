//
//  main.cpp
//  Stack
//
//  Created by Apul Gupta on 15/08/17.
//  Copyright © 2017 Apul Gupta. All rights reserved.
//

#include <iostream>
using namespace std;

int const MAX_SIZE=100;

class StackOverFlowException{
    
public:
    StackOverFlowException()
    {
        cout<<"Stack OverFlow"<<endl;
    }
    
};

class StackUnderFlowException{
    
public:
    StackUnderFlowException()
    {
            cout<<"Stack UnderFlow"<<endl;
    }
    
};

class ArrayStack{
    
private:
    int top;
    int data[MAX_SIZE];
    
public:
    ArrayStack()
    {
        top=-1;
    }
    
    void Push(int element){
        
        if(top >= MAX_SIZE){
            throw new StackOverFlowException;
        }
        data[++top]=element;
    }
    
    int Pull(){
        
        if (top == -1) {
            throw new StackUnderFlowException;
        }
        return data[top--];
        
    }
    
    int Top(){
        return data[top];
    }
    
    int Size(){
        
        return top+1;
    }
    
    bool isEmpty()
    {
        return (top == -1) ? true:false;
    }
};


int main(int argc, const char * argv[]) {
    
    ArrayStack s;
    
    try {
        
        if (s.isEmpty()) {
            cout<<"Stack is empty"<<endl;
        }
        
        //Push Elements
        s.Push(100);
        s.Push(200);
        
        //Size Of Stack
        cout<<"Size of the stack is:"<<s.Size()<<endl;
        
        //Top Element
        cout<<"Top Element of Stack:"<<s.Top()<<endl;
        
        //Pull Element
        cout<<"Poping of element starts"<<endl;
        cout<<s.Pull()<<endl;
        cout<<s.Pull()<<endl;
        cout<<s.Pull()<<endl;
        
    }
    
    catch (...) {
        
        cout<<"Some unexpected error occured"<<endl;
    }

    return 0;
}
