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

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here - code by Afif Islam
    LinkedListNode<int>* dummy = new LinkedListNode<int>(1);
    LinkedListNode<int>* toDelete = new LinkedListNode<int>(1);
    LinkedListNode<int>* fast = dummy;
    LinkedListNode<int>* slow = dummy;
    dummy->next=head;
    if(head==nullptr || K==0) return head;
    for(int i=0;i<K;i++){
        fast=fast->next;
    }
    while(fast->next!=nullptr){
        fast=fast->next;
        slow=slow->next;
    }
    toDelete = slow->next;
    slow->next = slow->next->next;
    delete(toDelete);
    return dummy->next;
}