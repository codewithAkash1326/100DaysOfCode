#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
         int n=mat.size();
        int m=mat[0].size();
        vector<int>ans;
        
        int index=0;
        int OnesCount=0;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                 count++;
                }
            }

           if(count>OnesCount) {
            OnesCount=count;
             index=i;
             }
        }

        ans.push_back(index);
        ans.push_back(OnesCount);
        return ans;
          
    }
};
int main(){
 
 
 
return 0;
}