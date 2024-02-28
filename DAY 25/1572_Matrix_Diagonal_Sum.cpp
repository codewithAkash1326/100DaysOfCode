#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int row=mat.size();
        for(int i=0;i<row;i++){
            sum+=mat[i][i]+mat[i][row-i-1];
        }
         if((row & 1)==0){
            return sum;
        }
        else {
            return sum-mat[row/2][row/2];
            }
    }
};
int main(){
 
 
 
return 0;
}