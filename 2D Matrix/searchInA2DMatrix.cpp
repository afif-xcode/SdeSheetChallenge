#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here - code by Afif Islam
    for(int i=0;i<mat.size();i++){
        auto it=find(mat[i].begin(),mat[i].end(),target);
        if(it!=mat[i].end()) return true;
    }
    return false;
}