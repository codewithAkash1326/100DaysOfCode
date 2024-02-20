#include<bits/stdc++.h>
using namespace std;
 
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int a=nums[0];
        int b=nums[nums.size()-1];

        if(a==0 ) return b;
       if(b==0) return a;

        while(a>0 && b>0){
            if(a>b){
                a=a-b;
            }

            else{
                b=b-a;
            }
        }

        return a==0 ? b : a;
    }
 
int main(){
 
 
 
return 0;
}