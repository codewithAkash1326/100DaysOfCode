#include<bits/stdc++.h>
using namespace std;
 
void getmiddle(stack<int>&st,int &pos){
  if(pos == 1) {
    st.pop();
    return;
  }

  pos--;
  int top = st.top();
  st.pop();

  getmiddle(st, pos);

  st.push(top);
  return;
}


void deleteMiddle(stack<int>&inputStack, int N){
	
   
 int pos=0;
 int size = N+1;

 if(size &1){
    pos = size/2 +1;
  }

 else{
    pos=size/2;
  }

  getmiddle(inputStack,pos);

   
}
int main(){
 
 
 
return 0;
}