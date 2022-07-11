/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public: 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
void inorder(BinaryTreeNode<int>* root, vector<int>&v){
    if(root==nullptr) return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here - code by Afif Islam
    vector<int>v;
    inorder(root,v);
    int l, r;
    l = 0;
    r = v.size()-1;
    while (l < r) {
        if (v[l] + v[r] == k)
            return 1;
        else if (v[l] + v[r] < k)
            l++;
        else // v[i] + v[j] > k
            r--;
    }
    return 0;
}