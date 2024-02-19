#include<bits/stdc++.h>
using namespace std;
 
 
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int e=row*col-1;

        int s=0;

        while(s<=e){
            int mid=s+(e-s)/2;

            int ele = matrix[mid/col][mid%col];

            if(ele==target){
                return true;
            }

            else if(target<ele){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

       return false;
    }

int main(){
 
 
 
return 0;
}