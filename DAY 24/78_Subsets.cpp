#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void subset(vector<int>nums,vector<int>output , int idx,  vector<vector<int>>&ans){
        if(idx>=nums.size()){
            ans.push_back(output);
            return;
        }

        // exclude
        subset(nums,output,idx+1,ans);

        // include
        output.push_back(nums[idx]);
        subset(nums,output,idx+1,ans);
    }
     vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;

        vector<int>output;

        subset(nums,output,0,ans);

      return ans;
    }
};
int main(){
 
 
 
return 0;
}