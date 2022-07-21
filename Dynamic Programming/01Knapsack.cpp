int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
    // Write your code here - code by Afif Islam
    vector<vector<int>>dp(n+1,vector<int>(w+1,0));
    for(int i =0; i<=n; ++i)dp[i][0] =0;
    for(int i =0; i<=w; ++i)dp[0][i] =0;
    for(int i =1; i<=n; ++i){
        for(int j =1; j<=w; ++j){
            if(weights[i-1]>j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], values[i-1]+dp[i-1][j-weights[i-1]]);
        }
    }
    return dp[n][w];
}