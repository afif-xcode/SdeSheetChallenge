int kthLargest(vector<int>& arr, int size, int K)
{
	// Write your code here - code by Afif Islam
    priority_queue<int>pq;
    for(int i=0;i<size;i++){
        pq.push(arr[i]);
    }
    while(pq.size()>size-K+1){
        pq.pop();
    }
    return pq.top();
}