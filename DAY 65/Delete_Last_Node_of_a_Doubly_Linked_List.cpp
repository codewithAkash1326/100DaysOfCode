#include<bits/stdc++.h>
using namespace std;
 
  struct Node {
       int data;
      Node *prev;
      Node *next;
      Node() : data(0), prev(nullptr), next(nullptr) {}
      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
  };
  

Node * deleteLastNode(Node *head) {
    if(head==NULL || head->next ==NULL) return NULL;
    // Write your code here
    Node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;

    }

    temp->prev->next=nullptr;

    free(temp);

    return head;


}

int main(){
 
 
 
return 0;
}