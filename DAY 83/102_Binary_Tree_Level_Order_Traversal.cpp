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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;

        if(root==NULL) return ans;

        queue<TreeNode* > q;

        q.push(root);
        q.push(NULL);
         vector<int>temp;

        while(!q.empty()){
            TreeNode* t= q.front();
            q.pop();
            
            if(t==NULL){
                ans.push_back(temp);
                temp.clear();

                if(q.empty()){
                    return ans;
                }
                q.push(NULL);
            }

            else{
                temp.push_back(t->val);
               // cout<<t->val<<" ";
                if(t->left !=NULL){
                    q.push(t->left);
                }
                if(t->right !=NULL){
                    q.push(t->right);
                }
            }
        }

        return ans;
    }
};
int main(){
 
 
 
return 0;
}