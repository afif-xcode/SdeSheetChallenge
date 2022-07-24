void solve(vector<int>&v, vector<vector<int>>& ans,vector<int>& temp, int index, int n){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    solve(v, ans, temp, index+1, n);
    int ele=v[index];
    temp.push_back(ele);
    solve(v, ans, temp, index+1, n);
    temp.pop_back();
}
vector<vector<int>> pwset(vector<int>v){
    //Write your code here - code by Afif Islam.
    vector<vector<int>> ans;
    vector<int> temp;
    int n=v.size();
    solve(v, ans, temp, 0, n);
    return ans;
}