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
int max(int a,int b){
    return a>b?a:b;
}
vector<vector<int>> levelOrder(TreeNode<int>*root){
    vector<vector<int>>ans;
    if(root==nullptr) return ans;
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            TreeNode<int>* node=q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            v.push_back(node->val);
        }
        ans.push_back(v);
    }
    return ans;
}
int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here - code by Afif Islam
    int maxi=0;
    vector<vector<int>>ans=levelOrder(root);
    for(int i=0;i<ans.size();i++){
        maxi=max(maxi,ans[i].size());
    }
    return maxi;
}