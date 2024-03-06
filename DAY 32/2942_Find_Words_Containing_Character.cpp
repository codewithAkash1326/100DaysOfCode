#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(string word,char x){
        for(int i=0;i<word.size();i++){
            if(word[i]==x) return true;
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i=0;i<words.size();i++){
            string curr = words[i];

            if(check(curr,x)) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
int main(){
 
 
 
return 0;
}
