// Input: s = "42"
// Output: 42
// Explanation: The underlined characters are what is read in, the caret is the current reader position.
// Step 1: "42" (no characters read because there is no leading whitespace)
//          ^
// Step 2: "42" (no characters read because there is neither a '-' nor '+')
//          ^
// Step 3: "42" ("42" is read in)
//            ^
// The parsed integer is 42.
// Since 42 is in the range [-231, 231 - 1], the final result is 42.
// Example 2:

// Input: s = "   -42"
// Output: -42
// Explanation:
// Step 1: "   -42" (leading whitespace is read and ignored)
//             ^
// Step 2: "   -42" ('-' is read, so the result should be negative)
//              ^
// Step 3: "   -42" ("42" is read in)
//                ^
// The parsed integer is -42.
// Since -42 is in the range [-231, 231 - 1], the final result is -42.
// Example 3:

// Input: s = "4193 with words"
// Output: 4193
// Explanation:
// Step 1: "4193 with words" (no characters read because there is no leading whitespace)
//          ^
// Step 2: "4193 with words" (no characters read because there is neither a '-' nor '+')
//          ^
// Step 3: "4193 with words" ("4193" is read in; reading stops because the next character is a non-digit)
//              ^
// The parsed integer is 4193.
// Since 4193 is in the range [-231, 231 - 1], the final result is 4193.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int num=0;
        int sign=1;

        int i=0;

        while(s[i]==' '){
            i++;
        }

        if(i<s.size() && (s[i]=='+' || s[i]=='-')){
            sign = s[i]=='+'? 1 : -1;
            i++;
        }

        while(i<s.size() && isdigit(s[i])){

            if(num>INT_MAX/10  || (num== INT_MAX/10 && s[i]>'7')){
                return sign== -1? INT_MIN : INT_MAX;
            }

            num = num*10 + (s[i]-'0');
            i++;
        }

       return sign*num;
        
    }
};

int main(){
 
 
 
return 0;
}