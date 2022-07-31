#include<bits/stdc++.h>
void solve(string &s,unordered_map<string,bool> &mp,vector<string> &ans,int i,string str){
    if(i==s.length()){
        ans.push_back(str);
        return ;
    }
    string k="";
//     cout<<str<<" ";
    for(int j=i;j<s.length();j++){
        k+=s[j];
        if(mp[k]){
            int l=str.length();
            str+=k+" ";
            solve(s,mp,ans,j+1,str);
            
            str.erase(str.begin()+l,str.end());
        }
    }
}
vector<string> wordBreak(string &s, vector<string> &dict)
{
    unordered_map<string,bool> mp;
    for(auto x:dict)
        mp[x]=true;
    vector<string> ans;
    string str="";
    solve(s,mp,ans,0,str);
    return ans;
}
