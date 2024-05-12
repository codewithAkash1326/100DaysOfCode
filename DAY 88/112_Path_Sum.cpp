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
    bool solve(TreeNode* root, int targetSum,int sum,int &cnt){

        if(root==NULL) return false;

        sum+=root->val;

        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                cnt++;
                return true;
            }

            else return false;
        }

        bool leftans = solve(root->left,targetSum,sum,cnt);
        bool rightans = solve(root->right,targetSum,sum,cnt);

        return leftans|| rightans;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum =0;
        bool ans = solve(root,targetSum,sum);
        return ans;
    }
};
int main(){
 
 
 
return 0;
}