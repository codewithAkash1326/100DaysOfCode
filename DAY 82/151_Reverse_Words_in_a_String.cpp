#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
       
       stack<string>st;
       string str;
        
        for(int i=0;i<s.size();i++){
           if(s[i]!=' '){
            str.push_back(s[i]);
            }

            else if(s[i]==' '){
                 if(not str.empty()) {
                    st.push(str);
                 }  
                 
                str.clear();
                  
            }
         }

        if(not str.empty()){
            st.push(str);
         }

         string ans;
         while(not st.empty()){
            
            ans+=st.top();
            ans.push_back(' ');
            
            st.pop();
         }
         ans.pop_back();

         return ans;

    }
};
int main(){
 
 
 
return 0;
}