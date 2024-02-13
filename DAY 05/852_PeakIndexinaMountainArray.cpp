// LEETCODE 852 
// Example 1:

// Input: arr = [0,1,0]
// Output: 1
// Example 2:

// Input: arr = [0,2,1,0]
// Output: 1
// Example 3:

// Input: arr = [0,10,5,2]
// Output: 1

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;

        while(start<end){

            int mid=start +(end-start)/2;

            if(arr[mid]>arr[mid+1]){
                end=mid;
            }
            else{
                start=mid+1;
            }
            
        }
        return end;
        
    }
};
