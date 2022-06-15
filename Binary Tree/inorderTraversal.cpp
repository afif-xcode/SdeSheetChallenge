/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void inorder(vector<int>&v,TreeNode* root){
    if(root==nullptr){
        return;
    }
    inorder(v,root->left);
    v.push_back(root->data);
    inorder(v,root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>v;
    inorder(v,root);
    return v;
}