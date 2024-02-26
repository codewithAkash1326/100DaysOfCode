#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        double sum=0;
        for(int i=0;i<salary.size();i++){
            mini = min(mini,salary[i]);
            maxi =max(maxi,salary[i]);

            sum+=salary[i];

        }
         sum-=mini+maxi;
        
        int emp = salary.size()-2;

        return sum/emp;


     
    }
};
int main(){
 
 
 
return 0;
}