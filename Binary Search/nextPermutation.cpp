#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here - code by Afif Islam
    vector<int>ans;
    next_permutation(permutation.begin(),permutation.end());
    for(int i=0;i<n;i++){
        ans.push_back(permutation[i]);
    }
    return ans;
}