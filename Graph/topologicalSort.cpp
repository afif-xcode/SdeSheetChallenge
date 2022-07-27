#include <unordered_map>
#include <queue>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here - code by Afif Islam.
    unordered_map<int,vector<int>> adj;
    for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
    }
    vector<int> indegree(v);
    for(auto i: adj){
        for(auto j: i.second){
            indegree[j]++;
        }
    }
    queue<int> q;
    vector<int> ans;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int front =q.front();
        q.pop();
        ans.push_back(front);
        for(auto it: adj[front]){
            indegree[it]--;
            if(indegree[it]==0)
                q.push(it);
        }
    }
    return ans;
}