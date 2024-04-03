// An integer divisible by the sum of its digits is said to be a Harshad number. You are given an integer x. Return the sum of the digits of x if x is a Harshad number, otherwise, return -1.

 

// Example 1:

// Input: x = 18

// Output: 9

// Explanation:

// The sum of digits of x is 9. 18 is divisible by 9. So 18 is a Harshad number and the answer is 9.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int digitsum(int x){
        int sum=0;
        while(x){
            int last = x%10;
            sum+=last;
            x/=10;
        }
      return sum;
    }
    int sumOfTheDigitsOfHarshadNumber(int x) {
        
       int n = digitsum(x);

       if(x%n==0) return n;
       else return -1;
        
        
    }
};

 
int main(){
 
 
 
return 0;
}