#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        while(n>1){
           int team = n/2;
           sum+=team;
           n=n-team;

        }

        return sum;
    }
};
int main(){
 
 
 
return 0;
}