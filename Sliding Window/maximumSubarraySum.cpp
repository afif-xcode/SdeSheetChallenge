#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    // code by Afif Islam
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    /*
    // O (N^3) solution
    long long best=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            long long sum=0;
            for(int k=i;k<=j;k++){ // iterating over subarrays
                sum+=arr[k]; // calculating sum of that subarrays
            }
            best=max(best,sum); // returning the maximum sum of all subarrays
        }
    }
    return best;
    */
    
    
    /*
    // O(N^2) solution
    long long best=0;
    for(int i=0;i<n;i++){
        long long sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            best=max(best,sum);
        }
    }
    return best;
    */
    // O(N) solution 
    long long best=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        long long x=arr[i];
        sum=max(x,sum+x);
        best=max(best,sum);
    }
    return best;
}