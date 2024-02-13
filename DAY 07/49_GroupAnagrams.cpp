#include<bits/stdc++.h>
using namespace std;
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;

        map<string,vector<string> >mp;

        for(int i=0;i<strs.size();i++){
            string curr=strs[i];
             sort(curr.begin(),curr.end());
             mp[curr].push_back(strs[i]);
        }

        for(auto it=mp.begin();it!=mp.end();it++){
            ans.push_back(it->second);
        }
 
        return ans;

    }

int main(){
    vector<string>strs={"eat","tea","tan","ate","nat","bat"};
     
    vector<vector<string>>ans=groupAnagrams(strs);

    for(int i=0;i<ans.size();i++){
         
         for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
         }
         cout<<endl;

    }
     


 
 
return 0;
}