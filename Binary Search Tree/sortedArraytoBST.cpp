/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
TreeNode<int>* convert(vector<int> &arr, int start,int end){
    if(start>end) return nullptr;
    int mid=(start+end)/2;
    TreeNode<int>* node = new TreeNode<int>(arr[mid]);
    node->left=convert(arr,start,mid-1);
    node->right=convert(arr,mid+1,end);
    return node;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here - code by Afif Islam
    return convert(arr,0,n-1);
}