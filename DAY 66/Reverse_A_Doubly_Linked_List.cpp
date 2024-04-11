#include<bits/stdc++.h>
using namespace std;
 
class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};


#include<stack>

Node* reverseDLL(Node* head)
{   
    // Write your code here   
   // Node* temp = head;

    // stack<int>st;

    // while(temp!=NULL){
    //     st.push(temp->data);
    //     temp=temp->next;
    // }
    // temp=head;

    // while(temp!=NULL){
    //     temp->data=st.top();
    //     st.pop();

    //     temp=temp->next;
    // }

     

    // return head;

    Node* prev=NULL;
    Node* curr=head;

    Node* newnode=NULL;

    while(curr!=NULL){
        newnode=curr->next;
        curr->prev=curr->next;
        curr->next=prev;
        prev=curr;
        curr=newnode;
    }

    return prev;
}


int main(){
 
 
 
return 0;
}