#include <unordered_map>
int romanToInt(string s) {
    // Write your code here - code by Afif Islam
    int ans=0;
    unordered_map<char,int>m;
    m.insert({'I',1});
    m.insert({'V',5});
    m.insert({'X',10});
    m.insert({'L',50});
    m.insert({'C',100});
    m.insert({'D',500});
    m.insert({'M',1000});
    for(int i=0;i<s.size();i++){
        int value=m[s[i]];
        if(m[s[i+1]]>value){
            ans-=value;
        }
        else{
            ans+=value;
        }
    }
    return ans;
}
