#include<bits/stdc++.h>
using namespace std;
void insertbottom(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }

     
    int top = st.top();

    st.pop();

    insertbottom(st,x);

    // backtrack
    st.push(top);
}

void reverse(stack<int>&st,int pos){
    if(pos==0) return;

    pos--;
    int top=st.top();

    st.pop();

     reverse(st,pos);
     
    insertbottom(st,top);



}
void reverseStack(stack<int> &stack) {
     int pos=stack.size();

      reverse(stack,pos);

}
int main(){
 
 
 
return 0;
}