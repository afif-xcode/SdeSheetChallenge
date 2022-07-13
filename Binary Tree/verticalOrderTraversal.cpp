/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/
#include <bits/stdc++.h>
vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here - code by Afif Islam
    vector<int>v;
    vector<vector<int>>ans;
    map<int,map<int,vector<int>>>nodes;
    queue<pair<TreeNode<int>*,pair<int,int>>>q;
    q.push({root,{0,0}});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        TreeNode<int>* node=it.first;
        int x=it.second.first, y=it.second.second;
        nodes[x][y].push_back(node->data);
        if(node->left) q.push({node->left,{x-1,y+1}});
        if(node->right) q.push({node->right,{x+1,y+1}});
    }
    for(auto i:nodes){
        vector<int>column;
        for(auto j:i.second){
            column.insert(column.end(),j.second.begin(),j.second.end());                
        }
        ans.push_back(column);
    }
    for(auto it:ans){
        for(auto i:it){
            v.push_back(i);
        }
    }
    return v;
}