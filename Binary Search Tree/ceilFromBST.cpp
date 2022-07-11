/************************************************************

    Following is the TreeNode class structure:

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
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here - code by Afif Islam
    int ans=-1;
    while(node!=nullptr){
        if(node->data==x){
            ans=node->data;
            break;
        }
        if(node->data>x){
            ans=node->data;
            node=node->left;
        }
        else{
            node=node->right;
        }
    }
    return ans;
}