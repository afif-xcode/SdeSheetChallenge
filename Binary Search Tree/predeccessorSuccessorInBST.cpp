/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
void predecessor(BinaryTreeNode<int>* root,int &pred, int key)
{
    while(root!=NULL)
    {
        if(key>root->data)
        {
            pred=root->data;
            root=root->right;
        }
        else if(key<=root->data)
        {
            root=root->left;
        }
    }
}
void successor(BinaryTreeNode<int>* root,int &succ, int key)
{
    while(root!=NULL)
    {
        if(key<root->data)
        {
            succ=root->data;
            root=root->left;
        }
        else if(key>=root->data)
        {
            root=root->right;
        }
    }
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here - code by Afif Islam

    int pred=-1;
    int succ=-1;
    
    predecessor(root,pred,key);
    successor(root,succ,key);
    
    pair<int,int>ans= {pred,succ};
    return ans;
}
