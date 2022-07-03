#include <bits/stdc++.h> 
// code by Afif Islam 
long long int res = 0;
void merge(long long arr[], long long s, long long e){
    long long int mid = s + (e - s) / 2;
    long long int len1 = mid - s + 1;
    long long int len2 = e - mid;
    long long int *first = new long long int[len1];
    long long int *second = new long long int[len2];
    long long int mainIndex = s;
    // Copying left elements in an array
    for (long long int i = 0; i < len1; i++){
        first[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    // Copying Right elements in an array
    for (long long int j = 0; j < len2; j++){
        second[j] = arr[mainIndex++];
    }
    // Merge 2 arrays
    long long int index1 = 0;
    long long int index2 = 0;
    mainIndex = s;
    while (index1 < len1 && index2 < len2){
        if (first[index1] <= second[index2]){
            arr[mainIndex++] = first[index1++];
        }
        else{
            arr[mainIndex++] = second[index2++];
            res += (len1 - index1);
        }
    }
    while (index1 < len1){
        arr[mainIndex++] = first[index1++];
    }
    while (index2 < len2){
        arr[mainIndex++] = second[index2++];
    }
    // space optimising //
    delete []first;
    delete []second;
}
void mergeSort(long long arr[], long long s, long long e){
    // Base Condition 
    if(s >=e){
        return;
    }
    long long int mid = s + (e - s) / 2;
    // sorting Left Part
    mergeSort(arr, s, mid);
    // Sorting Right Part
    mergeSort(arr, mid + 1, e);
    // Merge arrays
    merge(arr, s, e);
}
long long getInversions(long long *arr, long long n){
    mergeSort(arr,0,n-1);
    return res;
}
