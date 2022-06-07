#include <bits/stdc++.h> 
/********************************

    Following is the class structure of the Node class:
    
    class Node
    {
    	public:
    	    int data;
    	    Node *next;
    	    Node(int data)
    	    {
    	        this->data = data;
    	        this->next = NULL;
    	    }
    };

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
    // code by Afif Islam 
    
    //edge case
    if(head==nullptr || head->next==nullptr || k==0) return head;
    int len=1;
    Node* curr = head;
    while(curr->next!=nullptr){
        len+=1;
        curr=curr->next;
    }
    curr->next=head;
    k=k%len;
    k=len-k;
    while(k--){
        curr=curr->next;
    }
    head=curr->next;
    curr->next=nullptr;
    return head;
}