#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverse(string s){
        int st=0;
        int e= s.size()-1;
        
        while(st<=e){
         swap(s[st++],s[e--]);
        }
        
        return s;
    }
    bool isSubstringPresent(string s) {
         string rev = reverse(s);
        
        for(int i=0;i<s.size()-1;i++){
            string temp = "";
            temp.push_back(s[i]);
            temp.push_back(s[i+1]);
            
            if(rev.find(temp) !=string::npos){
              return true;
            }
        }
        
        return false;
        
        
    }
};
int main(){
 
 
 
return 0;
}