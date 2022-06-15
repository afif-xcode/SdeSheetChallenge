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
void left(TreeNode<int> *root,vector<int>&v,int level){
    if(root==nullptr){
        return;
    }
    if(v.size()==level){
        v.push_back(root->data);
    }
    left(root->left,v,level+1);
    left(root->right,v,level+1);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here - code by Afif Islam
    vector<int>v;
    left(root,v,0);
    return v;
}