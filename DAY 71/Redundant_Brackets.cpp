#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
bool check(string &s){
    stack<char>st;

    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }

        else if(s[i]==')'){

            int operatorCount=0;
            while(not st.empty() && st.top()!='('){
                char temp = st.top();
                if(temp=='+'  || temp=='-' || temp=='*' || temp=='/'){
                    operatorCount++;
                    st.pop();
                }
            }
            st.pop();
            if(operatorCount==0) return true;
        }
        
    }

    return false;
} 
bool findRedundantBrackets(string &s)
{  
    bool ans = check(s);
   return ans;
 
}

int main(){
 
 
 
return 0;
}