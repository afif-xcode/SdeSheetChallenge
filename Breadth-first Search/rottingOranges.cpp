#include <queue>
bool isValid(int i,int j,int n,int m)
{
    if(i>=n or j>=m or i<0 or j<0)
        return false;
    return true;
}
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here - code by Afif Islam.
    queue<pair<pair<int,int>,int>> q;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]==2)
                q.push({{i,j},0});
            if(grid[i][j]!=0)
                cnt++;
        }
    }
    int ans=0;
    int dx[]={-1,+1,0,0};
    int dy[]={0,0,-1,+1};
    while(!q.empty())
    {
        int i=q.front().first.first;
        int j=q.front().first.second;
        
        int minutes=q.front().second;
        ans=max(ans,minutes);
        
        q.pop();
        cnt--;
        
        for(int k=0;k<4;k++)
        {
            if(isValid(i+dx[k],j+dy[k],n,m) and grid[i+dx[k]][j+dy[k]]==1)
            {
                q.push({{i+dx[k],j+dy[k]},minutes+1});
                grid[i+dx[k]][j+dy[k]]=2;
            }
        }

    }
    
    if(cnt!=0)
        return -1;
    return ans;
}