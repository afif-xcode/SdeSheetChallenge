void dfs(vector<int> &temp, vector<int> &visited, int n, int target, vector<vector<int>> &adj){
    for(int i=0; i<n; i++){
        if(!visited[i] && adj[target][i]){
            temp.push_back(i);
            visited[i]=1;
            dfs(temp, visited, n, i, adj);
        }
    }
}
vector<vector<int>> depthFirstSearch(int n, int E, vector<vector<int>> &edges){
    // Write your code here - code by Afif Islam
    vector<vector<int>> adj(n, vector<int> (n, 0));
    for(int i=0; i<edges.size(); i++){
        adj[edges[i][0]][edges[i][1]]=1;
        adj[edges[i][1]][edges[i][0]]=1;
    }
    vector<vector<int>>dFS;
    vector<int> visited(n, 0);
    for(int i=0; i<n; i++){
        vector<int>temp;
        if(!visited[i]){
            temp.push_back(i);
            visited[i]=1;
            dfs(temp, visited, n, i, adj);
            dFS.push_back(temp);
        }
    }
    return dFS;
}