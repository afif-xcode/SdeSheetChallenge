#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here- code by Afif Islam
    sort(arr.begin(),arr.end());
    set<vector<int>>ans;
    vector<vector<int>>v;
    int left=0,right=0;
    for(int i=0;i<n-2;i++){
        left=i+1;
        right=n-1;
        while(left<right){
            if(arr[i]+arr[left]+arr[right]==K){
                ans.insert({arr[i],arr[left],arr[right]});
                left++;
                right--;
            }
            else if(arr[i]+arr[left]+arr[right]<K){
                left++;
            }
            else{
                right--;
            }
        }
    }
    for(auto it:ans){
        v.push_back(it);
    }
    return v;
}