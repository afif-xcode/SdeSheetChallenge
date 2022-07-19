#include <utility>
#include <unordered_map>
#include <queue>
#include <algorithm>
#define pii pair<int,int>
vector<int> KMostFrequent(int n, int k, vector<int> &arr){
   // Write your code here - code by Afif Islam
   unordered_map<int,int>mp;
    // store each element of array with their frequency
   for(auto i: arr){
       mp[i]++;
   }
    // store each element according to the priority of their frequency
    // maximum frequency at the top
   priority_queue<pii> pq;
   for(auto it: mp){
       pq.push({it.second,it.first});
   }
   vector<int>ans;
    // store the k elements in ans vector
   while(k--){
       ans.push_back(pq.top().second);
       pq.pop();
   }
    // sort the vector so that it is in ascending order
   sort(ans.begin(), ans.end());
   return ans;
}