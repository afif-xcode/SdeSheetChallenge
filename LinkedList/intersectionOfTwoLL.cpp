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

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here - code by Afif Islam
    Node* f=firstHead;
    Node* s=secondHead;
    while(f!=s){
        f = f==NULL?secondHead : f->next;
        s = s==NULL?firstHead : s->next;
    }
    if(f==nullptr || s==nullptr){
        return -1;
    }
    return f->data;
}