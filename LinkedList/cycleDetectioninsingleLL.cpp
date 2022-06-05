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

bool detectCycle(Node *head)
{
	//	Write your code here - code by Afif Islam
    Node* hare=head;
    Node* turtle=head;
    while(hare!=NULL && hare->next!=nullptr){
        hare=hare->next->next;
        turtle=turtle->next;
        if(hare==turtle) return true;
    }
    return false;
}