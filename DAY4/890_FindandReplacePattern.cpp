// LEETCODE 890

// Example 1:

// Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
// Output: ["mee","aqq"]
// Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
// "ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation, since a and b map to the same letter.
// Example 2:

// Input: words = ["a","b","c"], pattern = "a"
// Output: ["a","b","c"]





#include<bits/stdc++.h>
using namespace std;
 string mapi(string &s){
         char mapping[360]={0};
          int i=0;
          char start='a';
         for(auto ch:s){
            if(mapping[ch]==0){
            mapping[ch]=start;
            start++;
            i++;
            }
         }

         
         for(int i=0;i<s.size();i++){
             char ch=s[i];
             s[i]=mapping[ch];

         }
         return s;

     }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
         vector<string>ans;

         mapi(pattern);
        for(int i=0;i<words.size();i++){
            string temp = words[i];
            mapi(temp);
            if(pattern==temp){
                ans.push_back(words[i]);
            }
            

        }
        return ans;
    }
int main(){
       
 
 
return 0;
}