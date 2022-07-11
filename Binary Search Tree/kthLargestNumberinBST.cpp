/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
#include <algorithm>
#include <vector>
void inorder(TreeNode<int> *root, vector<int>&v){
    if(root==nullptr) return;
    inorder(root->right,v);
    v.push_back(root->data);
    inorder(root->left,v);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here- code by Afif Islam
    vector<int>v;
    inorder(root,v);
    if(k>v.size()) return -1;
    return v[k-1];
}
