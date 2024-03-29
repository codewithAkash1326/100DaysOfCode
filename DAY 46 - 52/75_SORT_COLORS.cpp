class Solution {
public:
void merge(vector<int>&nums,int low,int high,int mid){
    vector<int>temp;
    int left =low;
    int right=mid+1;

    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left]);
            left++;
        }

        else{
            temp.push_back(nums[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(nums[left]);
         left++;
    }

    while(right<=high){
        temp.push_back(nums[right]);
        right++;
        
    }


    for(int i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }


}
void MS(vector<int>&nums,int low,int high){
     if(low==high) return;

     int mid = (low + high)/2;

     MS(nums,low,mid);
     MS(nums,mid+1,high);

     merge(nums,low,high,mid);
}
    void sortColors(vector<int>& nums) {
    int low=0;
    int high = nums.size()-1;
    

    MS(nums,low,high);
    }
};
