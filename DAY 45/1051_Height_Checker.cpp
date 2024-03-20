#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt=0;
        vector<int>check;
        check=heights;

        sort(check.begin(),check.end());


        for(int i=0;i<check.size();i++){
            if(check[i]!=heights[i]){
                cnt++;
            }
        }

        return cnt;
    }
};
int main(){
 
 
 
return 0;
}