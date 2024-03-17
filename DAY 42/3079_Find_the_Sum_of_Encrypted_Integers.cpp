#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
              int curr = nums[i];
            
               int max = INT_MIN;
               int cnt=0;
            
              while(curr){
                  int last=curr%10;
                  cnt++;
                  if(last>max){
                    max=last;
                  }
                  curr=curr/10;

              }
            int mm=0;
            
             while(cnt--){
              mm=mm*10 + max;
             }
            
            sum+=mm;
            
            
            
            
        }
        
        return sum;
        
    }
};
int main(){
 
 
 
return 0;
}