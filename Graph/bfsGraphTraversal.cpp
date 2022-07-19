#include <queue>
#include <algorithm>
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here - code by Afif Islam
    vector<int>bfs;
    vector<bool>visited(vertex+1,0);
    vector<int>adj[vertex];
    for(int i=0;i<edges.size();i++){
        adj[edges[i].first].push_back(edges[i].second);
        adj[edges[i].second].push_back(edges[i].first);
    }
    for(int i=0;i<vertex;i++){
        if(visited[i]==0){
            queue<int>q;
            q.push(i);
            visited[i]=1;
            sort(adj[i].begin(),adj[i].end());
            while(!q.empty()){
                int node=q.front();
                q.pop();
                bfs.push_back(node);
                for(auto it:adj[node]){
                    if(visited[it]==0){
                        q.push(it);
                        visited[it]=1;
                    }
                }
            }
        }
    }
    return bfs;
}