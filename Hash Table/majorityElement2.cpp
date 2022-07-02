#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here - code by Afif Islam
    vector<int>v;
    int n=arr.size();
    int help=floor(n/3);
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto it:m){
        if(it.second>help){
            v.push_back(it.first);
        }
    }
    return v;
}