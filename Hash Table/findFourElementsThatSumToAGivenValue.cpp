#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here - code by Afif Islam

    unordered_map<int,pair<int,int>>m;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            // storing pair of indices in map for sum of two elements;
            m[arr[i]+arr[j]]={i,j};
            int sum = arr[i]+arr[j];
            if(m.find(target-sum)!=m.end()){
                pair<int,int>p=m[target-sum];
                
                // to check if no same elements are considered more than once
                if(p.first!=i && p.first!=j && p.second!=i && p.second!=j){
                    return "Yes";
                }
            }
        }
    }
    return "No";
}
