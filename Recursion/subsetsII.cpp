#include <algorithm>
void recursiveSubset(vector<int> &nums,vector<int> &ds,int ind,vector<vector<int>> &res){
    res.push_back(ds);
    for(int i=ind;i<nums.size();i++)
    {
        if(i!=ind && nums[i]==nums[i-1]) continue;
        ds.push_back(nums[i]);
        recursiveSubset(nums,ds,i+1,res);
        ds.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr){
    vector<int>ds;
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    recursiveSubset(arr,ds,0,ans);
    return ans;
}