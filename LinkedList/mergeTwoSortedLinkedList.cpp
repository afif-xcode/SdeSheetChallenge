#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here - code by Afif Islam
    Node<int>* f = first;
    Node<int>* s = second;
    Node<int>* ans;
    Node<int>* temp = nullptr;
    if(f == nullptr) return s;
    if(s == nullptr) return f;
    if(f->data > s->data) swap(f,s);
    ans = f;
    while(f!=nullptr && s!=nullptr){
        while(f!=nullptr && f->data<=s->data){
            temp = f;
            f = f->next;
        }
        temp->next = s;
        swap(f,s);
    }
    return ans;
}
