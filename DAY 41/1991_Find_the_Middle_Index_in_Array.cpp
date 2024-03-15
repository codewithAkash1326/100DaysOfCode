#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum =0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }

        int csum=0;
        int ans =-1;
        for(int i=0;i<nums.size();i++){
            if(csum==sum-csum-nums[i]){
                ans = i;
                break;
            }

            csum+=nums[i];
        }
        return ans;
    }
};
int main(){
 
 
 
return 0;
}