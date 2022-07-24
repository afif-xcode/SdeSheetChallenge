void recursiveFunction(int index, int sum,int size, vector<int>&ans, vector<int>&num){
    if(index==size){
        ans.push_back(sum);
        return;
    }
    recursiveFunction(index+1,sum+num[index],size,ans,num);
    recursiveFunction(index+1,sum,size,ans,num);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here - code by Afif Islam
    vector<int>ans;
    recursiveFunction(0,0,num.size(),ans,num);
    sort(ans.begin(),ans.end());
    return ans;
}