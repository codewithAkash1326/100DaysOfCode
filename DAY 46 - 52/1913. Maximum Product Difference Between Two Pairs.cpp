class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int small=nums[0]*nums[1];
        int max =nums[n-2]*nums[n-1];
        return max-small;
    }
};
