#include <bits/stdc++.h> 
/****************************************************************

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

*****************************************************************/

Node *firstNode(Node *head)
{
	//    Write your code here - code by Afif Islam 
    
    //edge cases
    if(head==nullptr || head->next==nullptr) return nullptr;
    Node* slow=head;
    Node* fast=head;
    Node* start=head;
    while(fast->next && fast->next->next){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            while(slow!=start){
                slow=slow->next;
                start=start->next;
            }
            return start;
        }
    }
    return NULL;
}