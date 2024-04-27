#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> next(vector<int>heights){
        stack<int>st;
        st.push(-1);

        vector<int>ans(heights.size());

        for(int i=heights.size()-1;i>=0;i--){
            int curr = heights[i];
            

            while(st.top()!=-1 && heights[st.top()]>= curr){
                st.pop();
                 
            }

            ans[i]=st.top();
            st.push(i);
        }
        
        return ans;
        

    }

    vector<int> prev(vector<int>heights){
        stack<int>st;
        st.push(-1);

        vector<int>ans(heights.size());

        for(int i=0;i<heights.size();i++){
            int curr = heights[i];
            

            while(st.top()!=-1 && heights[st.top()]>= curr){
                st.pop();
                
            }

            ans[i]=st.top();
            st.push(i);
        }
        
        return ans;
        

    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>prevans = prev(heights);
        vector<int>nextans= next(heights);

        int maxi = INT_MIN;

        for(int i=0;i<n;i++){
            
            int h = heights[i];

            if(nextans[i]==-1){  
             nextans[i]=n;

            }
            int l = (nextans[i] - prevans[i]) -1  ;
            int ar = l*h;
             maxi = max(maxi,ar);
        }
      
        return maxi;
    }
};
int main(){
 
 
 
return 0;
}