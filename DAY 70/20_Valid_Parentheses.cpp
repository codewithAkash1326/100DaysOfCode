#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
       
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }

            else{

                if(not st.empty()){

                char ch = st.top();
                         
                  if(s[i]==')' && ch=='('){
                    st.pop();
                  }

                  else if(s[i]=='}' && ch=='{'){
                    st.pop();
                  }

                  else if(s[i]==']' && ch=='['){
                    st.pop();
                  }

                  else{
                    return false;
                    }
                }


                else{
                    return false;
                }
             

                 
            }
        }

        if(!st.empty()) return false;
        else return true;
    }
};
int main(){
 
 
 
return 0;
}