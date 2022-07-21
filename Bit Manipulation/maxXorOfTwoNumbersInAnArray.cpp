int maximumXor(vector<int> A){
    // Write your code here - code by Afif Islam
    int maxXor = 0;
    int n=A.size();
    // Calculating xor of each pair
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            maxXor = max(maxXor,
            A[i] ^ A[j]);
        }
    }
    return maxXor;
}