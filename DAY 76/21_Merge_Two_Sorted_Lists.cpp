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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy= new ListNode(-1);
        ListNode* head = dummy;
        
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while(temp1!=NULL && temp2!=NULL){
             if(temp1->val <= temp2->val){
                ListNode* newnode = new ListNode(temp1->val);
                head->next= newnode;
                head = newnode;
                temp1=temp1->next;
             }

            else{
                ListNode* newnode = new ListNode(temp2->val);
                head->next= newnode;
                head = newnode;
                temp2=temp2->next;
            }
        }
        
         
        if(temp1!=NULL) head->next= temp1;
        
        if(temp2!=NULL) head->next= temp2;

        return dummy->next;
    }
};
int main(){
 
 
 
return 0;
}