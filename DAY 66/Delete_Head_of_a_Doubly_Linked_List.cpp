#include<bits/stdc++.h>
using namespace std;

  

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev=NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->next= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};


Node * deleteHead(Node *head) {

    if(head->next==NULL) {

        return NULL;
    };
    
    // Write your code here.
    Node* temp = head;

    head=head->next;
    head->prev=nullptr;

    free(temp);

    return head;
}

int main(){
 
 
 
return 0;
}