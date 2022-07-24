string expand(int l,int r,string s){
    while(l>=0 && r<=s.size()){
        if(s[l]!=s[r]){
            break;
        }
        l--;
        r++;
    }
    return s.substr(l+1,r-l-1);
}

string longestPalinSubstring(string str)
{
    // Write your code here - code by Afif Islam.
    string ans;
    int n=str.size();
    for(int i=0;i<n;i++){
        string odd=expand(i,i,str);
        if(odd.size()>ans.size()){
            ans=odd;
        }
    }
    for(int i=0;i<n;i++){
        string even=expand(i,i+1,str);
        if(even.size()>ans.size()){
            ans=even;
        }
    }
    return ans;
}