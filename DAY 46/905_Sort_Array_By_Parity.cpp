#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        vector<int>ans;

        for(auto it:nums){
            if(it%2==0){
                even.push_back(it);
            }
            else{
                odd.push_back(it);
            }
        }

        for(int i=0;i<even.size();i++){
            ans.push_back(even[i]);
        }
        for(int i=0;i<odd.size();i++){
            ans.push_back(odd[i]);
        }

        return ans;
    }
};
int main(){
 
 
 
return 0;
}