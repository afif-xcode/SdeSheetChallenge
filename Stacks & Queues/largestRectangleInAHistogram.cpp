#include <bits/stdc++.h> 
vector<int> prevSmaller(vector<int> arr){
  vector<int> ans;
  stack<int> s;
  ans.push_back(-1);
  s.push(-1);
  s.push(0);
  for(int i=1;i<arr.size();i++){
     while(s.top()!=-1 && arr[s.top()]>=arr[i]){
       s.pop();
     }
     ans.push_back(s.top());
     s.push(i);
  }
  return ans;
}

vector<int> nextSmaller(vector<int> arr){
  vector<int> ans;
  stack<int> s;
  s.push(-1);
  for(int i=arr.size()-1;i>=0;i--){
    while(s.top()!=-1 && arr[s.top()]>arr[i]){
        s.pop();
     }
     if(s.top()==-1){
        ans.push_back(arr.size());
     }
     else{
        ans.push_back(s.top());
     }
     s.push(i);
  }
  reverse(ans.begin(),ans.end());
  return ans;
}

 

int largestRectangle(vector < int > & arr) {
   // Write your code here.
       vector<int> prev;
       prev=prevSmaller(arr);

       vector<int> next;
       next=nextSmaller(arr);

       int maxVal=0;
       for(int i=0;i<arr.size();i++){
          int res=next[i]-prev[i]-1;
          maxVal=max(maxVal,res*arr[i]);
       }
       return maxVal;
 }