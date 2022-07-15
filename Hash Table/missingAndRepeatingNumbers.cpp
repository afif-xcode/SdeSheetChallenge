#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    // Write your code here - code by Afif Islam
    unordered_map<int,bool>m;
    pair<int,int>p;
    int f=0;
    int s=0;
    for(int it:arr){
        if(m.find(it)==m.end()){
            m[it]=true;
        }
        else{
            f=it;
        }
    }
    for(int i=1;i<=n;i++){
        if(m.find(i)==m.end()){
            s=i;
        }
    }
    p.first=s;
    p.second=f;
    return p;
}
