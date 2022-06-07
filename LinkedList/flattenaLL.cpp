#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};


*****************************************************************/
// merger function
Node *merger(Node* l1,Node* l2){
    //Node* start=new Node(0);
    Node* temp;
    
    if(l1==nullptr) return l2;
    if(l2==nullptr) return l1;
    
    if(l1->data < l2->data){
        temp=l1;
        temp->child=merger(l1->child,l2);
    }
    else{
        temp=l2;
        temp->child=merger(l1,l2->child);
    }
    //very important to write
    temp->next=nullptr;
    return temp;
}


Node* flattenLinkedList(Node* head) 
{
    // Write your code here - code by Afif Islam
    //edge case or base case
    if(head==nullptr || head->next==nullptr) return head;
    //recursive call to next list
    return merger(head,flattenLinkedList(head->next));
}
