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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here - code by Afif Islam
    // iterative code using three pointers
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