/************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here - code by Afif Islam
    TreeNode<int> *temp;
    TreeNode<int> *t;   
    if(root==nullptr || root->left==nullptr && root->right==nullptr){
        return root;
    }
    if(root->left){
        temp=root->right;
        root->right=root->left;
        root->left=nullptr;
        t=root->right;
        while(t->right){
            t=t->right;
        }
        t->right=temp;
    }
    flattenBinaryTree(root->right);
    return root;
}