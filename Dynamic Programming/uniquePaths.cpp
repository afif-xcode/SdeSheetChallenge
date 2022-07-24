int count(int n,int m,vector<vector<int>> &dp)
{
    if(n==1||m==1)
    {
        return 1;
    }

    if(n==0||m==0)
    {
        return 0;
    }

    if(dp[m][n]!=-1)
    {
        return dp[m][n];
    }

    return  dp[m][n]=count(n-1,m,dp)+count(n,m-1,dp);

}

int uniquePaths(int m, int n) {
    // Write your code here - code by Afif Islam.
    vector<vector<int>> dp(m+1,vector<int>(n+1,-1)); 
    return count(n,m,dp);
}