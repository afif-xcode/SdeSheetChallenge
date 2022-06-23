int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here - code by Afif Islam
    int cnt=1;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]!=arr[i]) {
            cnt++;
        }
    }
    return cnt;
}