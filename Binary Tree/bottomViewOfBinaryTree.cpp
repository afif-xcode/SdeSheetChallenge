/*************************************************************
 
    Following is the Binary Tree node structure.

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

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here - code by Afif Islam
    vector<int>ans;
    if(root==nullptr) return ans;
    map<int,int>m;
    queue<pair<BinaryTreeNode<int>*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto node=q.front();
        q.pop();
        m[node.second]=node.first->data;
        if(node.first->left!=nullptr) q.push({node.first->left,node.second-1});
        if(node.first->right!=nullptr) q.push({node.first->right,node.second+1});
    }
    for(auto it:m){
        ans.push_back(it.second);
    }
    return ans;
}
