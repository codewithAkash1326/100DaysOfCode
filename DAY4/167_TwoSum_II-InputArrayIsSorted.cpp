// Leetcode 167

class Solution {
public:
     int bs(vector<int>& numbers, int s,int target){
         int e=numbers.size()-1;
         while(s<=e){
             int mid = s+(e-s)/2;
             if(numbers[mid]==target){
                 return mid+1;
             }

             else if(numbers[mid]<target){
                s=mid+1;
             }
             else{
                 e=mid-1;
             }
         }
         return -1;
     }

    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=0;
        int e=numbers.size()-1;
        vector<int>ans;
        for(int i=0;i<numbers.size();i++){
            int search=target-numbers[i];

            if(bs(numbers,i+1,search) != -1){
                ans.push_back(i+1);
                ans.push_back(bs(numbers,i+1,search));
            }
        }

        return ans;
        
    }
};
