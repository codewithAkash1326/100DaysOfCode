#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
      int cnt=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                cnt++;
                if(cnt>2) return false;
            
            }
            
            else if(cnt>2)return false;
            
            else{
             cnt=1;
            }
            
        }
        return true;
        
    }
};
int main(){
 
 
 
return 0;
}