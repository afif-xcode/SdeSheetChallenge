#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)

{

 LinkedListNode<int> *temp=head;

 

       while(temp!=NULL)

       {  

           LinkedListNode<int> *front=temp->next;

           LinkedListNode<int> *dumy=new LinkedListNode<int> (temp->data);

       dumy->next=temp->next;

        temp->next=dumy;

        temp=front;

       }

   temp=head;

   while(temp!=NULL)

   {

       temp->next->random=temp->random;

       temp=temp->next->next;

   }

   temp=head;

   LinkedListNode<int>* copy=new LinkedListNode<int> (0);

   LinkedListNode<int> *newnode=copy;

   while(temp!=NULL)

   {

      LinkedListNode<int> *front=temp->next->next;

   copy->next=temp->next;

       temp->next=front;

       temp=front;

       copy=copy->next;

   }

 return newnode->next  ;

}