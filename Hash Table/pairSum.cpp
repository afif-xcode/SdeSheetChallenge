#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here - Afif Islam
    int n=arr.size();
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==s){
                ans.push_back(vector<int>{arr[i],arr[j]});
            }
        }
    }
    return ans;
}