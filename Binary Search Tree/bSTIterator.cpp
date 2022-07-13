/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
// This code is maintained by Afif Islam
#include <stack>
class BSTiterator
{
    public:
        stack<TreeNode<int>*>st;
    BSTiterator(TreeNode<int> *root)
    {
        // write your code here
        inorder(root); // push all left nodes
    }

    int next()
    {
        // write your code here
        TreeNode<int>* node = st.top();
        st.pop();
        inorder(node->right);
        return node->data; // return the smallest next node;
    }

    bool hasNext()
    {
        // write your code here
        return !st.empty();
    }
    void inorder(TreeNode<int>*root){
        while(root){
            st.push(root);
            root=root->left;
        }
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/