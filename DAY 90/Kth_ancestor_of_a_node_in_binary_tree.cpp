#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
bool find(BinaryTreeNode<int> *root, int targetNodeVal, int &k,int &ans){
      
      if(root==NULL) return false;

      if(root->data==targetNodeVal){
          return true;
      }
  
     bool lh=   find(root->left,targetNodeVal,k,ans);
     bool rh =  find(root->right,targetNodeVal,k,ans);

     if(lh==true || rh==true){
          k--;

        if(k==0) ans= root->data;
         return true;
     }

     else return false;

}
int findKthAncestor(BinaryTreeNode<int> *root, int targetNodeVal, int k) {
     
  int ans=0;
   bool ans1= find(root,targetNodeVal,k,ans);
   if(ans==0) return -1;
    else return ans;

}

int main(){
 
 
 
return 0;
}