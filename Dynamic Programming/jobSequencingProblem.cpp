#include <algorithm>
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here - code by Afif Islam.
    vector<pair<int,int>> j;
    int n=jobs.size();
    int n1=0;
    for(int i=0;i<n;i++)
    {
        int x=jobs[i][1];
        int y=jobs[i][0];
        n1=max(y,n1);
        j.push_back(make_pair(x,y));
    }
    sort(j.begin(),j.end());
    vector<int> pr(n1+1,0);
    for(int i=n-1;i>=0;i--)
    {
        int line=j[i].second;
        int mon=j[i].first;
        if(pr[line]==0)
            pr[line]=mon;
        else
        {
            while(line>0 && pr[line]!=0)
                line--;
            if(line>0)
                pr[line]=mon;
        }
    }
    int profit=0;
    for(int i=0;i<=n1;i++)
        profit+=pr[i];
    return profit;
}
