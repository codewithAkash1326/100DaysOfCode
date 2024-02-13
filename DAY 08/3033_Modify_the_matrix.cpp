// 3033. Modify the Matrix
 
// Given a 0-indexed m x n integer matrix matrix, create a new 0-indexed matrix called answer. Make answer equal to matrix, then replace each element with the value -1 with the maximum element in its respective column.

// Return the matrix answer.

class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>> ans(row,vector<int>(col));
          
        ans=matrix;
        int index=0;
        
        for(int j=0;j<col;j++){
            int find=0;
            int max=0;
           for(int i=0;i<row;i++){
               if(matrix[i][j]>max){
                  max =matrix[i][j];
               }
               
  
           }
            
           for(int i=0;i<row;i++){
          if(ans[i][j]==-1){
           ans[i][j]=max;
           }
           }
   
             
        }
        return ans;
        
    }
};
