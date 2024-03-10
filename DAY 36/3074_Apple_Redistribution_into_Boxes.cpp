#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int applesum=0;
        for(int i=0;i<apple.size();i++){
          applesum+=apple[i];
        }
        
        sort(capacity.begin(),capacity.end());
        
        int Csum=0;
        int cnt=0;
        //if(applesum<=capacity[capacity.size()-1]) return 1;
        for(int i=capacity.size()-1;i>=0;i--){
          
         if(Csum>=applesum){
             break;
         }
          else{
               Csum+=capacity[i];
              cnt++;
          }
            
        }
        
        return cnt;
    }
};
int main(){
 
 
 
return 0;
}