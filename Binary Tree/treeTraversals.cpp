/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/
void inorder(BinaryTreeNode<int> *root,vector<int>&ino){
    if(root==nullptr) return;
    inorder(root->left,ino);
    ino.push_back(root->data);
    inorder(root->right,ino);
}
void preorder(BinaryTreeNode<int> *root,vector<int> &pre){
    if(root==nullptr) return;
    pre.push_back(root->data);
    preorder(root->left, pre);
    preorder(root->right, pre);
}
void postorder(BinaryTreeNode<int> *root,vector<int>&pos){
    if(root==nullptr) return;
    postorder(root->left,pos);
    postorder(root->right,pos);
    pos.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here - code by Afif Islam
    vector<int>ino;
    vector<int>pre;
    vector<int>pos;
    vector<vector<int>>v;
    inorder(root,ino);
    postorder(root,pos);
    preorder(root,pre);
    v.push_back(ino);
    v.push_back(pre);
    v.push_back(pos);
    return v;
}