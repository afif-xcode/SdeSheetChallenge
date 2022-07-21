#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here - code by Afif Islam
    sort(intervals.begin(),intervals.end());
    int  n=intervals.size();
    vector<vector<int>>result;
    result.push_back(intervals[0]);
    for(int i=1;i<n;i++){
        if(result.back()[1]>=intervals[i][0]){
            result.back()[1]=max(result.back()[1],intervals[i][1]);
        }else{
            result.push_back(intervals[i]);
        }
    }
    return result;
}
