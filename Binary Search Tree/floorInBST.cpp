/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here - code by Afif Islam
    int ans=0;
    while(root!=nullptr){
        if(root->val==X){
            ans=root->val;
            break;
        }
        if(root->val<X){
            ans=root->val;
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    return ans;
}