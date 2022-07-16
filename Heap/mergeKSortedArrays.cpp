#include <algorithm>
#include <set>
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    multiset<int>v;
    vector<int>ans;
    for(int i=0;i<kArrays.size();i++){
        for(int j=0;j<kArrays[i].size();j++){
            v.insert(kArrays[i][j]);
        }
    }
    for(int it:v){
        ans.push_back(it);
    }
    v.clear();
    return ans;
}
