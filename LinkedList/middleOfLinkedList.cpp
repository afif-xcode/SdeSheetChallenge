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

Node *findMiddle(Node *head) {
    // Write your code here - code by Afif Islam
    Node *middle = new Node(0);
    Node *fast = head;
    Node *slow = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    middle = slow;
    return middle;
}