#include<bits/stdc++.h>
using namespace std;
void leftview(BinaryTreeNode<int>* root,int level,vector<int>&ans){
    if(root==NULL) return;

    if(ans.size()==level){
        ans.push_back(root->data);
    }

    leftview(root->left, level+1, ans);
    leftview(root->right, level+1, ans);

}

vector<int> printLeftView(BinaryTreeNode<int>* root) {
    vector<int>ans;
    int level = 0;
    leftview(root,  level, ans);

    return ans;


}
int main(){
 
 
 
return 0;
}