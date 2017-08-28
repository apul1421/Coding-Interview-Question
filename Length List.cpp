//
//  main.cpp
//  Length List
//
//  Created by Apul Gupta on 28/08/17.
//  Copyright © 2017 Apul Gupta. All rights reserved.
//

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    
};

class list{
    int count =0;
private:
    node *head;
    
public:
    list(){
        head = NULL;
    
    }
    
    void insert(int value){
        node *temp = new node;
        temp->data=value;
        temp->next=head;
        head=temp;
        
    }
    
    void size(){
        node *temp = new node;
        temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        cout<<count<<"\n";
    }
    
    void display(){
        node *temp = new node;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
        
        
    }

    
    
};



int main() {
    
    list obj;
    
    obj.insert(21);
    obj.insert(33);
    obj.insert(1);
    obj.insert(44);
    obj.insert(133);
    
    cout<<"Size of the linked list is ";
    obj.size();
    
    obj.display();
    
    return 0;
}
