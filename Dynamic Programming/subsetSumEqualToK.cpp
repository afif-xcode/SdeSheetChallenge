bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here - code by Afif Islam
    vector<vector<int>>dp(n+1,vector<int>(k+1));
    for(int i=0;i<=n;i++) dp[i][0]=1;
    for(int i=1; i<=k;i++) dp[0][i] = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(j<arr[i-1]) dp[i][j]=dp[i-1][j];
            else if(j>=arr[i-1]) dp[i][j]=(dp[i-1][j] || dp[i-1][j-arr[i-1]]);
        }
    }
    return dp[n][k];
}