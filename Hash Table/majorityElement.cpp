#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here - Afif Islam
    int ans=-1;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
        if(m[arr[i]]>floor(n/2)){
            ans=arr[i];
        }
    }
    return ans;
}