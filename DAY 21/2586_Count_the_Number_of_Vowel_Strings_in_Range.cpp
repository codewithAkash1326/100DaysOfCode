// You are given a 0-indexed array of string words and two integers left and right.

// A string is called a vowel string if it starts with a vowel character and ends with a vowel character where vowel characters are 'a', 'e', 'i', 'o', and 'u'.

// Return the number of vowel strings words[i] where i belongs to the inclusive range [left, right].

 

// Example 1:

// Input: words = ["are","amy","u"], left = 0, right = 2
// Output: 2
// Explanation: 
// - "are" is a vowel string because it starts with 'a' and ends with 'e'.
// - "amy" is not a vowel string because it does not end with a vowel.
// - "u" is a vowel string because it starts with 'u' and ends with 'u'.
// The number of vowel strings in the mentioned range is 2.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkVowel(char s){
        if(s=='a' || s=='e' || s=='o' || s=='i' || s=='u'){
            return true;
        }
        return false;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++){
            string c =words[i];
            if(checkVowel(c[0])==true && checkVowel(c[c.size()-1])==true){
                cnt++;
            }
        }

        return cnt;
    }
};
int main(){
 
 
 
return 0;
}