#include<bits/stdc++.h>
using namespace std;
 
      

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };
 
int height(TreeNode<int>* root){
    if(root==NULL) return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh)>1) return -1;

    if(lh==-1 || rh == -1) return -1;

    return max(lh,rh)+1;
}
bool isBalancedBT(TreeNode<int>* root){
    int ans = height(root);

    if(ans!=-1) return true;
    else return false;
}
int main(){
 
 
 
return 0;
}