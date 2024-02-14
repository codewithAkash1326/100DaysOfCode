#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        int s=0;
        int n=1;
         
        vector<int>ans(nums.size(),0) ;
          
         for(int i=0;i<nums.size();i++){
             if(nums[i]>0){
                 ans[s]=nums[i];
                 s+=2;
             }
         }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                ans[n]=nums[i];
                n+=2;
            }
        }

         
        return ans;
    }
int main(){
 
 
 
return 0;
}