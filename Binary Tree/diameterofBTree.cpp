/************************************************************

    Following is the TreeNode class structure

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
int height(TreeNode<int>*root,int &diameter){
    if(root==nullptr) return 0;
    int lh=height(root->left,diameter);
    int rh=height(root->right,diameter);
    diameter=max(diameter,rh+lh);
    return max(rh,lh)+1;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here - code by Afif Islam
    int diameter=0;
    height(root,diameter);
    return diameter;
}
