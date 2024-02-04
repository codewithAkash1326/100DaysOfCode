// 3028. Ant on the Boundary
 
// An ant is on a boundary. It sometimes goes left and sometimes right.

// You are given an array of non-zero integers nums. The ant starts reading nums from the first element of it to its end. At each step, it moves according to the value of the current element:

// If nums[i] < 0, it moves left by -nums[i] units.
// If nums[i] > 0, it moves right by nums[i] units.
// Return the number of times the ant returns to the boundary.

// Input: nums = [2,3,-5]
// Output: 1
// Explanation: After the first step, the ant is 2 steps to the right of the boundary.
// After the second step, the ant is 5 steps to the right of the boundary.
// After the third step, the ant is on the boundary.
// So the answer is 1.

#include<bits/stdc++.h>
using namespace std;
    int returnToBoundaryCount(vector<int>& nums) {
        int sum=0;
        int cnt=0;
        
        for(int i=0;i<nums.size();i++){
          sum+=nums[i];
            if( sum==0){
                cnt++;
            }
        }
        
        return cnt;
        
    }
int main(){
 
    vector<int>nums={2,3,-5};
    cout<<returnToBoundaryCount(nums)<<endl;
 
return 0;
}