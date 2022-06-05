#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
//code to reverse linked list
LinkedListNode<int> *reverse(LinkedListNode<int> *head){
    LinkedListNode<int> *prev=nullptr;
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *ahead;
    while(curr!=nullptr){
        ahead=curr->next;
        curr->next=prev;
        prev=curr;
        curr=ahead;
    }
    return prev;
}


bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here - code by Afif Islam
    
    //base case
    
    if(head==nullptr || head->next==nullptr) return true;
    
    LinkedListNode<int> *temp=head;
    LinkedListNode<int> *fast=head;
    LinkedListNode<int> *slow=head;
    
    //find middle of linked list
    while(fast->next!=nullptr && fast->next->next!=nullptr){
        fast=fast->next->next;
        slow=slow->next;
    }
    slow->next=reverse(slow->next);
    slow=slow->next;
    while(slow!=nullptr){
        if(temp->data!=slow->data) return false;
        slow=slow->next;
        temp=temp->next;
    }
    return true;
}