/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
#include <bits/stdc++.h>
using namespace std;
void inorder(BinaryTreeNode<int>* root, vector<BinaryTreeNode<int>*>&v){
    if(root==NULL) return;
    inorder(root->left,v);
    v.push_back(root);
    inorder(root->right,v);
}
BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    // Write your code here - code by Afif Islam
    vector<BinaryTreeNode<int>*>v;
    inorder(root,v);
    for(int i=0;i<v.size();i++){
        if(i==v.size()-1){
            v[i]->left=v[i-1];
            v[i]->right=NULL;
            continue;
        }
        else if(i==0){
            v[i]->right=v[i+1];
            v[i]->left=NULL;
            continue;
        }
        else{
            v[i]->left=v[i-1];
            v[i]->right=v[i+1];
        }
    }
    BinaryTreeNode<int>* node = v[0];
    v.clear();
    return node;
}