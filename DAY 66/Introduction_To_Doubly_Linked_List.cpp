#include<bits/stdc++.h>
using namespace std;

 class Node{
 public:
     int data;
     Node *next, *prev;
     Node() : data(0), next(nullptr), prev(nullptr) {}
     Node(int x) : data(x), next(nullptr), prev(nullptr) {}
     Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 };
 

Node* constructDLL(vector<int>& arr) {
     

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i=1;i<arr.size();i++){

        Node* newnode = new Node(arr[i]);

         newnode->prev=temp;
         temp->next=newnode;

         temp=temp->next;
    }

    return head;
}

int main(){
 
 
 
return 0;
}