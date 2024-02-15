#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool compare(int a,int b){
        return a>b;
    }
    int find(int key , vector<int>s){
        for(int i=0;i<s.size();i++){
            if(key==s[i]) return i;
        }
        return -1;
    }
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>an;
        vector<string>ans(score.size());
        an=score;

        sort(score.begin(),score.end(),compare);

        for(int i=0;i<score.size();i++){
            int index=find(score[i],an);
            if(i==0){
                ans[index]="Gold Medal";
            }
           else if(i==1){
                ans[index]="Silver Medal";
            }
           else if(i==2){
                ans[index]="Bronze Medal";
            }

            else{
                ans[index]=to_string(i+1);
            }
        }
        return ans;
    }
};
int main(){
 
 
 
return 0;
}