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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next ==NULL || head==NULL) return head;
        ListNode* curr = head;
        ListNode* nextnode=NULL; 

        while(curr->next!=NULL){
            nextnode= curr->next;

            int gcd = __gcd(curr->val,curr->next->val);

            ListNode* newnode = new ListNode(gcd);

            curr->next=newnode;
            newnode->next=nextnode;

           curr=nextnode;
        }

        return head;

    }
};
int main(){
 
 
 
return 0;
}