#include<bits/stdc++.h>
using namespace std;


class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* sortList(Node *head){
    Node* zcnt = new Node(-1);
    Node* ocnt = new Node(-1);
    Node* tcnt = new Node(-1);

    Node* zero = zcnt;
    Node* one = ocnt;
    Node* two = tcnt;

    Node* temp = head;

    while(temp!=NULL){
        if(temp->data ==0){
            zero->next = temp;
            zero =temp;
            temp=temp->next;
            
        }

        else if(temp->data==1){
            one->next=temp;
            one = temp;
            temp=temp->next;
        }

        else{
            two->next=temp;
            two= temp;
            temp=temp->next;
        }


    }
   
    two->next=NULL;
    zero->next = ocnt->next;
    one->next = tcnt->next;
    

    return zcnt->next;




}
int main(){
 
 
 
return 0;
}