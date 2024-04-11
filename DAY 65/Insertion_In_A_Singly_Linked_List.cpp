#include<bits/stdc++.h>
using namespace std;
 
    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

 
Node * insert(Node * head, int n, int pos, int val) {
    // Write your code here
    Node* temp = head;
    Node* mover = NULL;
    if(pos==0) {
        Node* newnode = new Node(val);

        newnode->next=head;
        temp=newnode;
        return temp;
    }

    int cnt=-1;

    while(temp!=NULL){
        cnt++;

        if(cnt==pos-1){
             Node* newnode = new Node(val);
            
            newnode->next=temp->next;
            temp->next=newnode;
             break;

        }

        temp=temp->next;
        
    }

    return head;
}
int main(){
 
 
 
return 0;
}