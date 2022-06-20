/************************************************************

    Following is the TreeNode class structure:

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
#include <map>
vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here - code by Afif Islam
    vector<int>ans;
    map<int,int>m;
    queue<pair<TreeNode<int>*,int>>q;
    q.push({root,0});
    if(root==nullptr) return ans;
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        if(m.find(it.second)==m.end()) m[it.second]=it.first->val;
        if(it.first->left!=nullptr) q.push({it.first->left,it.second-1});
        if(it.first->right!=nullptr) q.push({it.first->right,it.second+1});
    }
    for(auto it:m) ans.push_back(it.second);
    return ans;
}