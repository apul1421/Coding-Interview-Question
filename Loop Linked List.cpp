//
//  main.cpp
//  Loop Linked List
//
//  Created by Apul Gupta on 26/08/17.
//  Copyright © 2017 Apul Gupta. All rights reserved.
//

#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class list{
    
  
    
public:
    node *head = new node;
    list(){
    head = NULL;
    }
    
    void insert(int value){
        
        node *temp = new node;
        temp->data = value;
        temp->next = head;
        head = temp;
        cout<<"Element inserted"<<"\n";
    
    }
    
    void findloop(node *head){
        node *slow = head;
        node *fast = head;
        
        
        while (slow && fast && fast->next) {
            
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) {
                cout<<"Loop is found in the Linked List\n";
                return;
            }
            
        }
        
        cout<<"No loop in the Link List\n";
        
    }
    
    void display(){
        node *temp =new node;
        temp=head;
        while (temp!=NULL) {
            cout<<temp->data<<"\t";
            temp=temp->next;
            
        }
        
    cout<<"\n";
    
    }
    
};




int main() {
    
    list obj;
    obj.insert(12);
    obj.insert(15);
    obj.insert(44);
    obj.insert(90);
    obj.insert(7);
    obj.display();
    
    obj.head->next->next->next->next->next = obj.head->next;
    
    
    obj.findloop(obj.head);
    
    return 0;
}
