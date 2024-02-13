// 2325 LEETCODE DECODE THE MESSAGE

// Input: key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv"
// Output: "this is a secret"
// Explanation: The diagram above shows the substitution table.
// It is obtained by taking the first appearance of each letter in "the quick brown fox jumps over the lazy dog".


#include<bits/stdc++.h>
using namespace std;

string decodeMessage(string key, string message) {
        char start='a';

        char map[260]={0};

        for(auto ch:key){
            if(ch !=' ' && map[ch]==0  ){
                map[ch]=start;
                start++;
            }
        }

         string ans="";
        for(auto ch:message){
            if(ch==' '){
               ans.push_back(' ');
            }
            else{
                char decode= map[ch];
                ans.push_back(decode);
                 
            }
        }
     
      return ans;
        
    }

int main(){
 
 string key;
 getline(cin,key);


 string message;
 getline(cin,message);

 string ans = decodeMessage(key,message);

 cout<<ans;
 
 
return 0;
}