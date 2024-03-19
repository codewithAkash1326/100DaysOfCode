#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt=0;

        for(int i=0;i<words.size();i++){
            string temp = words[i];
            int idx = s.find(temp);

            if(idx==0){
                cnt++;
            }
            
        }

        return cnt;
    }
};
int main(){
 
 
 
return 0;
}