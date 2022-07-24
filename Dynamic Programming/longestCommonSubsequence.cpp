#include <vector>
int lcs(string s, string t)
{
	//Write your code here - code by Afif Islam
    int x=s.size(),y=t.size();
    vector<int>prev(y+1,0),curr(y+1,0);
    //for(int i=0;i<=x;i++) dp[i][0]=0;
    for(int j=0;j<=y;j++) prev[j]=0;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(s[i-1]==t[j-1]) curr[j]=1+prev[j-1];
            else curr[j]= max(prev[j],curr[j-1]);
        }
        prev=curr;
    }
    // int m=0;
    // for(int i=0;i<=x;i++){
    //     for(int j=0;j<=y;j++){
    //         m=max(m,curr[j]);
    //     }
    // }

    return prev[y];
}