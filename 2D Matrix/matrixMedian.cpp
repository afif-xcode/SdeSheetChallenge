#include <algorithm>
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here - code by Afif Islam
    vector<int>v;
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            v.push_back(matrix[i][j]);
        }
    }
    sort(v.begin(),v.end());
    return v[v.size()/2];
}