/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
TreeNode<int>* buildTree(vector<int>& postOrder, vector<int>& inOrder, int start, int end, int &index){
    if(start>end) return nullptr;
    int curr = postOrder[index];
    index--;
    TreeNode<int>* root = new TreeNode<int>(curr);
    int pos=-1;
    for(int i=start;i<=end;i++){
        if(inOrder[i]==curr){
            pos=i;
        }
    }
    if(start==end) return root;
    root->right = buildTree(postOrder, inOrder, pos+1, end,index);
    
    root->left = buildTree(postOrder, inOrder, start, pos-1,index);
    return root;
}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	// Write your code here - code by Afif Islam
    int index=postOrder.size()-1;
    return buildTree(postOrder,inOrder,0,inOrder.size()-1,index);
}
