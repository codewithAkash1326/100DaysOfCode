#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string check;
        for(int i=0;i<words.size();i++){
            string curr = words[i];
            check.push_back(curr[0]);
         
        }

        if(s==check) return true;
        else return false;
    }
};
int main(){
 
 
 
return 0;
}