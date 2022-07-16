int zAlgorithm(string s, string p, int n, int m)
{
    // Write your code here - code by Afif Islam
    int cnt=0;
    for(int i=0;i<n-m+1;i++){
        string ans=s.substr(i,m);
        if(ans==p){
            cnt++;
        }
    }
    return cnt;
}