// Given an integer n, return the number of prime numbers that are strictly less than n.

 

// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0


#include<bits/stdc++.h>
using namespace std;
 


    int countPrimes(int n) {
        if(n==0) return 0;

        vector<bool>isprime(n,true);
        
        isprime[0]=isprime[1]=false;
       int cnt=0;
        for(int i=2;i<n;i++){
            if(isprime[i]){
                
                cnt++;

                int j=i*2;
                while(j<n){
                    isprime[j]=false;
                    j=j+i;
                }
            }
        }
        return cnt;
    }
 
int main(){
 
 
 
return 0;
}