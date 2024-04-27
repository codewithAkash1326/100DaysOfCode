#include<bits/stdc++.h>
using namespace std;
#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int>st;
    st.push(-1);

    vector<int>ans(n);

    for(int i=arr.size()-1;i>=0;i--){
 
    while(arr[i] <= st.top() && !st.empty() ){
           st.pop();
      }
      
      ans[i] = st.top();
       st.push(arr[i]);
 
 
    }



    return ans;
}
int main(){
 
 
 
return 0;
}