#include <vector>
#include <algorithm>
int longestIncreasingSubsequence(int arr[], int n)
{
    // Write Your Code here - code by Afif Islam
    vector<int>dp;
    dp.push_back(arr[0]);
    int len=1;
    for(int i=1;i<n;i++){
        if(arr[i]>dp.back()){
            dp.push_back(arr[i]);
            len++;
        }else{
            int ind=lower_bound(dp.begin(),dp.end(),arr[i])-dp.begin();
            dp[ind]=arr[i];
        }
    }
    return len;
}
