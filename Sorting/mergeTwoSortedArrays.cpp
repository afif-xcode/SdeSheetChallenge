#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here - code by Afif Islam
    arr1.resize(m+n);
    for(int i=m;i<m+n;i++){
        arr1[i] = arr2[i-m];
    }
    sort(arr1.begin(),arr1.end());
    return arr1;
}