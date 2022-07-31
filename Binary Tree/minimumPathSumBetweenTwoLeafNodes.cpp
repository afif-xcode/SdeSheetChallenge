/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#define ll long long int  

#include<bits/stdc++.h>

 

ll fx(TreeNode<int> *r , ll &a,int &lc){

   if(r==NULL)return 0;

   if(r->left==NULL && r->right ==NULL)lc++;

   ll l,r2;

   l= fx(r->left,a,lc);

   r2=fx(r->right,a,lc);

a = max(a , l+r2+r->val);

   

   return max({r->val + r2 ,l+r->val});

}

 

long long int findMaxSumPath(TreeNode<int> *r){

   if(r==NULL)return -1;

   ll a = 0 , b = 0 ;

   int lc = 0;

   b = fx(r,a,lc);

   

   if(lc == 0 || lc == 1)return -1;

   return a;

}