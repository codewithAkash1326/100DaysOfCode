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
    bool solve(TreeNode* root, int targetSum,int sum,vector<vector<int>> &ans, vector<int>tempv){
        if(root==NULL) return false;
        sum+=root->val;
        tempv.push_back(root->val);

        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                ans.push_back(tempv);
                return true;
            }
            else return false;
        }

        bool leftans = solve(root->left,targetSum,sum,ans,tempv);
        bool rightans = solve(root->right,targetSum,sum,ans,tempv);

        return leftans|| rightans;

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum =0;
        vector<vector<int>> ans;
        vector<int>tempv;

        bool temp = solve(root,targetSum,sum,ans,tempv);
        return ans;
    }
};
int main(){
 
 
 
return 0;
}