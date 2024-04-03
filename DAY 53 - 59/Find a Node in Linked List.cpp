//CODE STUDIO


// Problem statement
// You have been given a singly linked list of integers. Write a function that returns the index/position of integer data denoted by 'N' (if it exists). Return -1 otherwise.

// Note :
// Assume that the Indexing for the singly linked list always starts from 0.



/****************************************************************
 
    Following is the class structure of the Node class:

    class Node
    {
    	public:
        int data;
        Node *next;
        Node(int data)
        {
	        this->data = data;
	        this->next = NULL;
        }
    };

*****************************************************************/

int findNode(Node *head, int n){
    // Write your code here.
    Node* temp = head;
    int idx=0;

    while(temp!=nullptr){
        if(temp->data==n) return idx;
        idx++;
        temp=temp->next;
    }

    return -1;
}
