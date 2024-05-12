#include<bits/stdc++.h>
using namespace std;
 

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };
 
#include<queue>
#include<map>
vector<int> getTopView(TreeNode<int> *root)
{ 
    vector<int>ans;

     if(root==NULL) return ans;

     queue<pair<TreeNode<int> * , int>>q;

     q.push({root,0});

     map<int,int>mp;

     while(!q.empty()){
         auto it = q.front();
         TreeNode<int> * temp =  it.first;
         int line = it.second;
         q.pop();

         if(mp.find(line)==mp.end()) mp[line]=temp->data;

         if(temp->left!=NULL){
             q.push({temp->left,line-1});
         }
           if(temp->right!=NULL){
             q.push({temp->right,line+1});
         }

         
     }

     for(auto it:mp){
         ans.push_back(it.second);
     }

     return ans;
}

int main(){
 
 
 
return 0;
}