#include <unordered_map>
bool areAnagram(string &str1, string &str2){
    // Write your code here - code by Afif Islam
    // Time Complexity - O(n)+O(n);
    unordered_map<char,int>m;
    vector<bool>v;
    bool ans=false;
    if(str1.size()==str2.size()){
        for(int i=0;i<str1.size();i++){
            m[str1[i]]++;
        }
        for(int i=0;i<str1.size();i++){
            if(m.find(str2[i])!=m.end()){
                m[str2[i]]--;
            }
            if(m[str2[i]]==0){
                v.push_back(true);
            }
        }
        if(v.size()==m.size()) ans= true;
        else ans= false;
    }
    return ans;
}