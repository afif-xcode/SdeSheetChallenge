/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
//check for leaf nodes
bool isLeaf(TreeNode<int>* root){
    return root->left==NULL && root->right==NULL;
}

//traverse the left boundary and add to data structure
void leftBoundary(TreeNode<int>* root,vector<int>&ans){
    TreeNode<int>* curr=root->left;
    while(curr!=NULL){
        if(!isLeaf(curr)) ans.push_back(curr->data);
        if(curr->left) curr=curr->left;
        else curr=curr->right;
    }
}

//traverse the right boundary and add to data structure
void rightBoundary(TreeNode<int>* root,vector<int>&ans){
    TreeNode<int>* curr=root->right;
    vector<int>temp;
    while(curr!=nullptr){
        if(!isLeaf(curr)) temp.push_back(curr->data);
        if(curr->right) curr=curr->right;
        else curr=curr->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
        ans.push_back(temp[i]);
    }
}

//traverse the leaf nodes and add them
void leafBoundary(TreeNode<int>* root,vector<int>&ans){
    if(isLeaf(root)){
        ans.push_back(root->data);
        return;
    }
    if(root->left) leafBoundary(root->left,ans);
    if(root->right) leafBoundary(root->right,ans);
}

vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here- code by Afif Islam
    vector<int>ans;
    if(root==nullptr) return ans;
    if(!isLeaf(root)) ans.push_back(root->data);
    leftBoundary(root,ans);
    leafBoundary(root,ans);
    rightBoundary(root,ans);
    return ans;
}