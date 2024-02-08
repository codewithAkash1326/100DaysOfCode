#include<bits/stdc++.h>
using namespace std;
     bool check(char ch){
          if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
              return true;
          }

          else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
              return true;
          }

          return false;
     }
    string reverseVowels(string s) {

        int i=0;
        int j= s.size()-1;

        while(i<=j){
            if(check(s[i])==true && check(s[j])==true){
                swap(s[i],s[j]);
                i++;
                j--;
            }

            else if(check(s[i])==false || check(s[j])==true){
                 i++;
            }
            else{
                j--;
            }
        }
        return s;
    }

int main(){
 string s;
 cin>>s;

 string ans =reverseVowels(s);
 cout<<ans;
 
 
return 0;
}