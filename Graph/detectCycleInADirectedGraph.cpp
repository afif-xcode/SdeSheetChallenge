#include<bits/stdc++.h>
bool detect_cycle(int node, vector<int> adj[], vector<int> &vis){
    vis[node] = 2;
    for(auto it: adj[node]){
        if(vis[it]==0){
            if(detect_cycle(it, adj, vis)) return true;
        }
        else if(vis[it] == 2) return true;
    }
    vis[node] = 1;
    return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    // Write your code here - code by Afif Islam
    vector<int> adj[n+1];   
    for(int i=0;i<edges.size();i++){
        adj[edges[i].first].push_back(edges[i].second);
    }
    vector<int> vis(n+1, 0);
    for(int i=1;i<n;i++){
        if(vis[i] == 0){
            if(detect_cycle(i,adj,vis)){
                return 1;
            }
        }
    }
    return 0;
}