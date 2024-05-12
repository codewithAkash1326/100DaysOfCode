#include<bits/stdc++.h>
using namespace std;


    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };
 
#include<stack>

bool isLeaf(TreeNode<int> *root) {
  return !root->left && !root->right;
}
void left(TreeNode<int> *root,vector<int>&ans){
   

 TreeNode<int> *curr=root->left;
 while(curr){
    if(!isLeaf(curr)) ans.push_back(curr->data);

    if(curr->left==NULL) curr=curr->right;
        
    else curr=curr->left;
         
       }
    
}

void inorder(TreeNode<int> *root,vector<int>&ans){

   // if(root==NULL) return;

    if(isLeaf(root)){
        ans.push_back(root->data);
        return;
        
    }

    if(root->left) inorder(root->left,ans);
    if(root->right)inorder(root->right,ans);
}


void right(TreeNode<int> *root,stack<int>&st){
 TreeNode<int> *curr=root->right;
    while(curr){
     if(!isLeaf(curr)) st.push(curr->data);
         

    if(curr->right) curr=curr->right;

     else curr=curr->left;
     
    }
    

}
vector<int> traverseBoundary(TreeNode<int> *root)
{ 
    vector<int>ans;
    if(!isLeaf(root))ans.push_back(root->data);
    left(root,ans);

    inorder(root,ans);

    stack<int>st;
    right(root,st);

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

  

    return ans;
}

int main(){
 
 
 
return 0;
}