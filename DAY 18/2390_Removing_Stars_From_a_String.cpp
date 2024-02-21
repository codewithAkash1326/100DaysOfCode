#include<bits/stdc++.h>
using namespace std;
 
    string removeStars(string s) {
         string ans="";
         for(int i=0;i<s.size();i++){
             if(s[i]=='*'){
                 ans.pop_back();
             }
             else{
                 ans.push_back(s[i]);
             }
         }

         return ans;
    }
     

int main(){
 
 
 
return 0;
}