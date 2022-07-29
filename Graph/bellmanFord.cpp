int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here - code by Afif Islam.
    int inf = INT_MAX;
    vector<int> dist(n, inf);
    dist[src-1] = 0;
    bool nextrelaxationneeded = true;
    for(int i = 0;i<n-1;i++){
        nextrelaxationneeded = false;
        for(auto x: edges){
            int u = x[0]-1;
            int v = x[1]-1;
            int w = x[2];
            if((long long)dist[u] + w<dist[v]){
                dist[v] = dist[u] + w;
                nextrelaxationneeded = true;
            }
        }
        if(!nextrelaxationneeded)break;
    }
       if(dist[dest-1]<1e9)
        return dist[dest-1];
    else return 1e9;
}