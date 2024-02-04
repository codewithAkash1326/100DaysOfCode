
// 647. Palindromic Substrings

// Given a string s, return the number of palindromic substrings in it.

// A string is a palindrome when it reads the same backward as forward.

// A substring is a contiguous sequence of characters within the string.

// Example 1:

// Input: s = "abc"
// Output: 3
// Explanation: Three palindromic strings: "a", "b", "c".
// Example 2:

// Input: s = "aaa"
// Output: 6
// Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".


#include<bits/stdc++.h>
using namespace std;
     int expand(string s, int i, int j){
        int count=0;

        while( i>=0 && j<s.length() && s[i]==s[j] ) {
                count++;
                i--;
                j++;
            
        }
        return count;
    }

    int countSubstrings(string s) {
        int totalCount=0;
        for(int point=0;point<s.length();point++){

            int OddCount= expand(s,point,point);

            int EvenCount= expand(s,point,point+1);

            totalCount +=  OddCount + EvenCount;
        }

        return totalCount;
    }
int main(){
 
     string s;
     cin>>s;
 
     int ans = countSubstrings(s);
     cout<<ans<<endl;

 
return 0;
}