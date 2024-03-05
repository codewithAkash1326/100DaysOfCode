#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low,int high,int mid){
    vector<int>temp;
    int left =low;
    int right=mid+1;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }

        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
         left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
        
    }


    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }


}
void MS(vector<int>&arr,int low,int high){
     if(low==high) return;

     int mid = (low + high)/2;

     MS(arr,low,mid);
     MS(arr,mid+1,high);

     merge(arr,low,high,mid);
}
void mergeSort(vector < int > & arr, int n) {
    
    int low=0;
    int high = n-1;
    

    MS(arr,low,high);
}
int main(){
 
 
 
return 0;
}