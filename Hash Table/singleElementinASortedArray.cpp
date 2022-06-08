int uniqueElement(vector<int> arr, int n)
{
	// Write your code here - code by Afif Islam
    int ans;
    for(int i=0;i<n-1;i++){
        if(i>=1){
            if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
                ans=arr[i];
                break;
            }
        }
        else{
            if(arr[i]!=arr[i+1]) ans=arr[i];
        }
    }
    if(arr[n-1]!=arr[n-2]) ans=arr[n-1];
    return ans;
}
