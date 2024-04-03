#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(){
        this->data=0;
        this->next=nullptr;
    }

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

Node* deletehead(Node* &head){

    if(head==NULL) return head;
    Node* temp = head;

    head=head->next;
    delete(temp);
    
    return head;


}

void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

 
int main(){
 
 Node *first= new Node(5);
 Node *sec= new Node(10);
 Node *third= new Node(15);
 Node *fourth= new Node(25);
 Node *fifth = new Node(35);


 first->next=sec;
 sec->next=third;
 third->next=fourth;
 fourth->next=fifth;


 Node* head = first;

  head= deletehead(head);

 cout<<head->data;



 
return 0;
}
