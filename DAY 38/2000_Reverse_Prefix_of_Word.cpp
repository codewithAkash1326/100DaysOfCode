#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverse(int s,int end,string &word){
        while(s<=end){
            swap(word[s++],word[end--]);
        }
    }
    string reversePrefix(string word, char ch) {
        int idx = word.find(ch);

        reverse(0,idx,word);

        return word;
    }
};
int main(){
 
 
 
return 0;
}