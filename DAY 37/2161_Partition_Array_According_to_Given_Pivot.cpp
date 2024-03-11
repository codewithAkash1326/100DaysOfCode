#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> right;

        int pCnt = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == pivot){
                pCnt++;
            }
            else if(nums[i] < pivot){
                left.push_back(nums[i]);
            }
            else{
                right.push_back(nums[i]);
            }
        }

        for(int i=0; i<pCnt; i++){
            left.push_back(pivot);
        }

        for(int i=0;i<right.size();i++){
            left.push_back(right[i]);
        }

        return left;
    }
};
int main(){
 
 
 
return 0;
}