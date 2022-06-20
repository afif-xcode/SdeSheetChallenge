/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/

bool check(BinaryTreeNode<int>*L,BinaryTreeNode<int>*R){
    if(L==NULL || R==NULL) return L==R;
    if(L->data!=R->data) return false;
    return check(L->left,R->right) && check(L->right,R->left);
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here - code by Afif Islam
    return root==NULL || check(root->left,root->right);
}