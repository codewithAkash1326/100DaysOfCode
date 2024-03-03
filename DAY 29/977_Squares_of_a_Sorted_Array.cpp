#include<bits/stdc++.h>
using namespace std;

int main(){
 class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();

        vector<int>ans(n);

        int s=0;
        int e=n-1;
        int idx=n-1;

        while(s<=e){
            if(abs(nums[s] ) > abs(nums[e])){
                ans[idx--]= nums[s] * nums[s];
                s++;
            }

            else{
                ans[idx--]=nums[e] * nums[e];
                e--;
            }
        }
        return ans;
    }
};
 
 
return 0;
}