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
TreeNode<int> *buildTree(vector<int> &inorder, vector<int> &preorder, int start, int end, int &index){
    if(start>end) return nullptr;
    int curr = preorder[index];
    index++;
    
    TreeNode<int>* root=new TreeNode<int>(curr);
    int pos=0;
    for(int i=start;i<=end;i++){
        if(curr==inorder[i]){
            pos=i;
        }
    } 
    if(start==end) return root;
    root->left = buildTree(inorder,preorder,start,pos-1,index);
    root->right = buildTree(inorder,preorder,pos+1,end,index);
    return root;
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
    //    Write your code here - code by Afif Islam
    int index=0;
    return buildTree(inorder,preorder,0,inorder.size()-1,index);
}