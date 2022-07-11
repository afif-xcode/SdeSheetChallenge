/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/
TreeNode <int>* constructBST(vector<int> &preOrder, int &index, int &maximum){
    if(preOrder[index]>maximum || index==preOrder.size()){
        return NULL;
    }
    TreeNode<int>* root = new TreeNode<int>(preOrder[index]);
    index++;
    root->left = constructBST(preOrder,index,root->data);
    root->right = constructBST(preOrder, index, maximum);
    return root;
}
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here - code by Afif Islam
    int index=0;
    int maximum=1e9;
    TreeNode<int>* node = constructBST(preOrder,index,maximum);
    return node;
}
