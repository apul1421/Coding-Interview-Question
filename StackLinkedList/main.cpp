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

    void Push(int element){
        
        Node* temp = new Node();
        temp->data=element;
        temp->link=top;
        top=temp;
        count++;
        
    }
    
    int Pop(){
        if(top==NULL){
            throw new StackUnderFlowException;
        }
        int ret = top->data;
        Node* temp = top->link;
        delete top;
        top = temp;
        count--;
        return ret;
        
    }
    
    int Top(){
        
        return top->data;
    }
    
    
    int Size(){
        
        return count;
    }
    
    bool isEmpty(){
        
        return (top=NULL) ? true:false;
    }
    
};

int main(int argc, const char * argv[]) {
    ListStack s;
    try {
        if(s.isEmpty()){
            cout<<"Stack is Empty";
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
        cout<<s.Pop()<<endl;
        cout<<s.Pop()<<endl;
        cout<<s.Pop()<<endl;
        
    }
    
    catch (...) {
        
        cout<<"Some unexpected error occured"<<endl;
    }

    return 0;
}
