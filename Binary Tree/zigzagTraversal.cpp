/*************************************************************

    Following is the Binary Tree node structure

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

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here - code by Afif Islam
    vector<int>ans;
    if(root==nullptr) return ans;
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    bool left=true;
    while(!q.empty()){
        int size=q.size();
        int vsize=ans.size();
        ans.resize(vsize+size);
        for(int i=0;i<size;i++){
            BinaryTreeNode<int>* node=q.front();
            q.pop();
            int index=left?vsize+i:vsize+size-1-i;
            ans[index]=node->data;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        left=!left;
    }
    return ans;
}
