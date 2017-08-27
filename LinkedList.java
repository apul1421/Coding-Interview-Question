package com.apul.Looper;

class Node {

	int data;
	Node next;
	Node(int value){
		data=value;
		next=null;
	}
}

public class LinkedList{	
	Node head;
	
	public void insert(int element){
		
		Node temp = new Node(element);
		temp.next = head;
		head = temp;
		
	}
	
	void loopdetect(){
		Node slow=head;
		Node fast=head;
		
		while (slow!=null && fast!=null && fast.next!=null){
			slow = slow.next;
            fast = fast.next.next;
            
            if(slow==fast)
            {
            	System.out.println("Loop is found in the list");
            	return;
            }
		}
		
		System.out.println("No Loop found in the list");
	}
	
	public static void main(String args[]){
		
		LinkedList obj =new LinkedList();
		
		obj.insert(22);
		obj.insert(88);
		obj.insert(98);
		obj.insert(102);
		obj.insert(2);
		
		obj.head.next.next.next.next.next = obj.head.next;
		
		obj.loopdetect();
		
	}
	
	
}
