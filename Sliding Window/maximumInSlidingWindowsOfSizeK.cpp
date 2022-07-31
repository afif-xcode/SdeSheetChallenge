vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    // Write your code here - code by Afif Islam.
    vector<int> v;
    int j, max; 
    int n = nums.size();
    for (int i = 0; i <= n - k; i++) { 
        max = nums[i]; 
        for (j = 1; j < k; j++) { 
            if (nums[i + j] > max) 
                max = nums[i + j]; 
        } 
        v.push_back(max);   
    }   
    return v;
}