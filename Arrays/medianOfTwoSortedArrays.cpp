#include <bits/stdc++.h>
double median(vector<int> a, vector<int> b)
{
    // Write your code here - code by Afif Islam
    int n=a.size();
    int m=b.size();
    multiset<int>ms;
    vector<int>v;
    for(int i=0;i<n;i++){
        ms.insert(a[i]);
    }
    for(int j=0;j<m;j++){
        ms.insert(b[j]);
    }
    for(auto it:ms){
        v.push_back(it);
    }
    int idx=n+m;
    if(idx%2==0){
        return double((v[idx/2]+v[(idx/2)-1])/2.0);
    }
    return double(v[idx/2]);
}
