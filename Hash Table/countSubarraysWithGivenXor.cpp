#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    // Write your code here - code by Afif Islam
    unordered_map<int,int>visited;
    int count=0;
    int prefixXor=0;
    int xoR=0;
    for(int i=0;i<arr.size();i++){
        prefixXor^=arr[i];
        if(prefixXor==x) count++;
        xoR=prefixXor^x;
        if(visited.find(xoR)!=visited.end()){
            count+=visited[xoR];
        }
        visited[prefixXor]++;
    }
    return count++;
}