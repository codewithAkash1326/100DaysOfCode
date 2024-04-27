#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        bool ans = false;
        ListNode* slow = head;
         ListNode* fast = head;

         while(fast!=NULL){
            fast = fast->next;

            if(fast!=NULL){
                fast = fast->next;
                slow = slow->next;

                if(fast==slow){
                    ans = true;
                    break;
                }
            }

        }

        if(ans==true){
            slow = head;

            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }

            return slow;
        }
         else return NULL;

    }
};
int main(){
 
 
 
return 0;
}