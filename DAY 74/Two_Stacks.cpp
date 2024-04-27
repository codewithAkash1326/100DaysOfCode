#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
class TwoStack {

public:
    int *arr;
    int top1;
    int top2;
    int size;
    
    TwoStack(int s) {
        // Write your code here.
        arr=new int[s];
        this->size=s;
        this->top1=-1;
        this->top2=size;

      }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
       if(top2-top1==1) return ;
        
            top1++;
            arr[top1]=num;
        
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here
         if(top2-top1==1) return ;

        
            top2--;
            arr[top2]=num;
        
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
         int popele1=-1;
        // Write your code here.
        if(top1==-1) return -1;
        
        else{
            popele1=arr[top1];
            arr[top1]=-1;
            top1--;
        }
        return popele1;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
         int popele2=-1;
         if(top2==size) return -1;
    
        else{
            popele2= arr[top2];
            arr[top2]=-1;
            top2++;
        }

        return popele2;
    }
};

int main(){
 
 
 
return 0;
}