//
//  main.cpp
//  Linked List Basic
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
    
    
    //Class to handle nodes
    
    class list{
      
    private:
        node *head;
        node *tail;
        
    public:
        
        list(){
            head = NULL;
            tail = NULL;
        }
    
    
        //Insertion at end
        void insert_end(int value){
            
            node *temp = new node;
            temp -> data=value;
            temp -> next=NULL;
            
            if(head==NULL){
                head=temp;
                tail=temp;
                temp=NULL;
                
            }
            else{
                
                tail->next=temp;
                tail=temp;
                
            }
            
        }
        
        
        //Insert at the start
        
        void insert_start(int value){
            
            node *temp =new node;
            temp->data=value;
            temp->next=head;
            head=temp;
            
            
        }
        
     //Insert at a particular position
        void insert_position(int value,int pos){
           
            node *prev = new node;
            node *curr = new node;
            node *temp = new node;
            curr=head;
            
            for(int i=1;i<pos;i++){
                prev=curr;
                curr=curr->next;
            }
            
            temp->data=value;
            prev->next=temp;
            temp->next=curr;
        }
        
     
    //Deletion from the start
        void delete_start(){
            node *temp = new node;
            temp=head;
            head=head->next;
            delete temp;
        }
        
    //Deletion from the end
        void delete_end(){
            node *current = new node;
            node *previous = new node;
            current=head;
            
            while (current->next!=NULL) {
                previous=current;
                current=current->next;
            }
            
            tail=previous;
            previous->next=NULL;
            delete current;
        }
        
     
     //Deletion at a particular position
        void delete_position(int pos){
            node *current = new node;
            node *previous =new node;
            current=head;
            
            for (int i=1; i<pos; i++) {
                previous=current;
                current=current->next;
            }
            previous->next=current->next;
        }
        
        
    //Display the list
        void display(){
            node *temp = new node;
            temp=head;
            while(temp!=NULL){
                cout<<temp->data<<"\t";
                temp=temp->next;
                
            }
            cout<<"\n";
            
        }
    
    };
    
    int main(){
    
        list obj; //object of class list
        
        
        obj.insert_end(13);
        obj.insert_end(18);
        obj.insert_end(98);
        obj.insert_end(10);
        
        obj.display();
        
        cout<<"Insert at front"<<"\n";
        
        obj.insert_start(83);
        
        obj.display();
        
        cout<<"Insert at end"<<"\n";
        
        obj.insert_end(103);
        
        obj.display();
        
        cout<<"Insert at position 3"<<"\n";
        
        obj.insert_position(301,3) ;
        
        obj.display();
        
        cout<<"Deletion at start"<<"\n";
        
        obj.delete_start() ;
        
        obj.display();
        
        cout<<"Deletion at position 2"<<"\n";
        
        obj.delete_position(2);
        
        obj.display();
        
        cout<<"Deletion at end"<<"\n";
        
        obj.delete_end() ;
        
        obj.display();



        
    return 0;
    
    }

