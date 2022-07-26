#include <queue>
#include <unordered_map>
int heightOfTheTree(vector<int>& inorder, vector<int>& levelOrder, int N){
    // Write your code here - code by Afif Islam.
    queue<vector<int>> q;
    unordered_map<int,int> umap;
    for(int i=0;i<inorder.size();i++)
    {
        umap[inorder[i]]=i;
    }
    int k=0;
    if(umap.find(levelOrder[0])!=umap.end())
    {
        if(umap[levelOrder[0]]==inorder.size()-1)
            q.push({0,umap[levelOrder[0]]-1,1});
        else if(umap[levelOrder[0]]==0)
            q.push({1,(int)(inorder.size()-1),1});
        else {
            q.push({0,umap[levelOrder[0]]-1,1});
            q.push({umap[levelOrder[0]]+1,(int)(inorder.size()-1),1});
        }
    }
    k++;
    int ans=0;
    while(!q.empty())
    {
        vector<int> temp=q.front();
        q.pop();
        ans=max(ans,temp[2]);
        if(umap.find(levelOrder[k])!=umap.end())
        {
            if(temp[1]==temp[0])
            {
                ans=max(ans,temp[2]+1);

            }
            else if(umap[levelOrder[k]]==temp[1])
                q.push({temp[0],umap[levelOrder[k]]-1,temp[2]+1});
            else if(umap[levelOrder[k]]==temp[0])
                q.push({umap[levelOrder[k]]+1,(int)(temp[1]),temp[2]+1});
            else {
                q.push({temp[0],umap[levelOrder[k]]-1,temp[2]+1});
                q.push({umap[levelOrder[k]]+1,(int)(temp[1]),temp[2]+1});
            }
        }
        k++;
    }
    return ans-1;
}