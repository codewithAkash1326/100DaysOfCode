#include<bits/stdc++.h>
using namespace std;
 
    static bool compare(string a,string b){
        string t=a+b;
        string u=b+a;

        return t>u;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>snums;
        for(auto n : nums){
            snums.push_back(to_string(n));
        }

        sort(snums.begin(),snums.end(),compare );
        if(snums[0]=="0") return "0";
         string ans="";
         for(auto str:snums){
             ans+=str;
         }

         return ans;
         
    }
 
int main(){
 
 
 
return 0;
}