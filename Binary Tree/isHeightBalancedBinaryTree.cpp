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
int height(BinaryTreeNode<int>* root){
    if(root==nullptr) return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    if(lh==-1 || rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return max(lh,rh)+1;
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here - code by Afif Islam
    if(height(root)!=-1) return true;
    return false;
}