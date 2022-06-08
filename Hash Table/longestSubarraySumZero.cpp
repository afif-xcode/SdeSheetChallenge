#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here - code by Afif Islam
    unordered_map<int,int>m;
    int sum=0;
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
            if(m.find(sum)!=m.end()){
                maxi=max(maxi,i-m[sum]);
            }
            else{
                m[sum]=i;
            }
        }
    }
    return maxi;
}
