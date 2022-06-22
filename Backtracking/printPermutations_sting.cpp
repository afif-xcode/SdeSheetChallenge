void permute(string &s,int left,int right,vector<string>&ans){
    if(left==right) ans.push_back(s);
    for(int i=left;i<=right;i++){
        swap(s[left],s[i]);
        permute(s,left+1,right,ans);
        swap(s[left],s[i]);
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here - code by Afif Islam
    vector<string>ans;
    permute(s,0,s.size()-1,ans);
    return ans;
}