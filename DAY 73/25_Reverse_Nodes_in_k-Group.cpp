#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        if(head==NULL) return NULL;

        ListNode* temp = head;
        int cnt =0;
        while(temp !=NULL){
            cnt++;
            temp=temp->next;
        }
      
        if(cnt<k) return head;

        else{
 
              ListNode* prev = NULL;
              ListNode* next = NULL;  
              ListNode* curr = head;
              int count = 1;

           while(curr!=NULL && count<=k){
                count++;
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
             
             } 

        
             head ->next = reverseKGroup(next,k);

             return prev;
        }


    }
};
int main(){
 
 
 
return 0;
}