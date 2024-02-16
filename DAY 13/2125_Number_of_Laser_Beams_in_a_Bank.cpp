#include<bits/stdc++.h>
using namespace std; 
 
    int countD(string s){
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        return cnt;
    }
    int numberOfBeams(vector<string>& bank) {
        vector<int>device;

        for(auto str:bank){
            device.push_back(countD(str));
        }

        int ans=0;
        for(int i=0;i<device.size();i++){
            int j=i+1;
            while(j<device.size()){
                ans+=device[i]*device[j];
                if(device[j]==0){
                    j++;
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
int main(){
 
 
 
return 0;
}