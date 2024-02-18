// Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.
 

// Example 1:

// Input: timePoints = ["23:59","00:00"]
// Output: 1
// Example 2:

// Input: timePoints = ["00:00","23:59","00:00"]
// Output: 0

#include<bits/stdc++.h>
using namespace std;
    int convert(string s){
        int hr=stoi(s.substr(0,2));
        int mn=stoi(s.substr(3,2));

        return hr*60 + mn;
       
    }
    int findMinDifference(vector<string>& timePoints) {
        vector<int>Min;

        for(int i=0;i<timePoints.size();i++){
            int change=convert(timePoints[i]);
            Min.push_back(change);
        }

        sort(Min.begin(),Min.end());
        int tdiff=INT_MAX;


        int lastdiff=Min[0] + 1440 - Min[Min.size()-1];
        for(int i=0;i<Min.size()-1;i++){
            int diff =abs( Min[i]-Min[i+1]);
            
             tdiff=min(tdiff,diff);


             tdiff=min(tdiff,lastdiff);
        }
        return tdiff;
    }
int main(){
 
 
 
return 0;
}