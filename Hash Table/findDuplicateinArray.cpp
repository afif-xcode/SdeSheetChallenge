#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    unordered_map<int,int>m;
    int ans=0;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    for(auto it:m){
        if(it.second > 1) ans=it.first;
    }
    return ans;
}
