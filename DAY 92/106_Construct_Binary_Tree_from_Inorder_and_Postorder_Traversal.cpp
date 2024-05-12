#include<bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    void createmap(vector<int>&inorder,map<int,int>&mp){
      for(int i=0;i<inorder.size();i++){
         mp[inorder[i]]=i;
      }
           
    }
    TreeNode* build(vector<int>& postorder, vector<int>& inorder,int &postindex,int size,int start,int end,map<int,int>&mp){
          
        if(postindex<0 || start>end   ){
              return NULL;
        }
        
        int element = postorder[postindex];
        postindex--;
        
        int pos =  mp[element];
        
        TreeNode* root = new TreeNode(element);
        
        root->right = build(postorder,inorder,postindex,size,pos+1,end,mp);
         root->left = build(postorder,inorder,postindex,size,start,pos-1,mp);
        return root;
        

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         int size = postorder.size();
        int start = 0;
        int end = size-1;
        int postindex=size-1;

        map<int,int>mp;
        createmap(inorder,mp); 
        
        TreeNode* ans = build(postorder,inorder,postindex,size,start,end,mp );
        
        return ans;
    }
};
int main(){
 
 
 
return 0;
}