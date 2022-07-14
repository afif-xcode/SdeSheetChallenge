/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/
#include <queue>
void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here - code by Afif Islam
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        BinaryTreeNode<int>* node = q.front();
        q.pop();
        if(node!=nullptr){
            node->next=q.front();
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}