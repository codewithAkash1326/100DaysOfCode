//CODE STUDIO

// You are given a Singly Linked List of integers with a head pointer. Every node of the Linked List has a value written on it.



// A sample Linked List:


// Now you have been given an integer value, 'K'. Your task is to check whether a node with a value equal to 'K' exists in the given linked list. Return 1 if node exists else return 0.

// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 3 6 2 7 9 -1
// 2
// Sample Output 1:
// 1
// Explanation for Sample Input 1:
// As value 2 exists in the given linked list. So we will return 1 in this case.



/****************************************************************

    Following is the class structure of the Node class:

    template <typename T>
    class Node
    {
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
    };

*****************************************************************/

int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
 
  Node<int>*temp = head;

  while(temp){
      if(temp->data==k) return 1;

      temp=temp->next;
  }

  
  return 0;

   












}
