#include <iostream>

using namespace std;
  
// A doubly linked list node
struct Node {
   string data;
   struct Node* next;
   struct Node* prev;
   Node *link;
};

  
//Append node at the front of the list
void append_data(Node** head, string new_data)
{
   //Create a new node and allocate memory.
   struct Node* newNode = new Node;
  
   //assign data to new node
   newNode->data = new_data;
  
   // A new node has been added with the name head and the previous node 
   // set to null, since it is being added at the front.
   newNode->next = (*head);
   newNode->prev = NULL;
  
   //previous head is new node
   if ((*head) != NULL)
   (*head)->prev = newNode;
  
   //head points to new node
   (*head) = newNode;
}

      
void insertAtMid(Node** head, string data){
    Node* new_Node = new Node();
    new_Node->data = data;
    if(*head == NULL){
          return;
    }
       Node* ptr = *head;
        int size = 0;
 
        // calculate length of the linked list
        //, i.e, the number of nodes
        while (ptr != NULL) {
            size++;
            ptr = ptr->next;
        }
    
    // find middle position
      int mid_pos = (size % 2 == 0) ? (size/2) : (size+1)/2;
      if(mid_pos == size){
        new_Node->next = NULL;
        new_Node->prev = *head;
        (*head)->next = new_Node;
        size++;
        return;
    }
    Node* temp = *head;
    while(--mid_pos){
        temp = temp->next;
    }
    
    (temp->next)->prev = new_Node;
    new_Node->prev = temp;
    new_Node->next = temp->next;
    temp->next = new_Node;
    size++;
    
}

 
// Following function display contents of the doubly linked list
void displayDlList(Node* head)
{
    Node* last_node;
    cout << "\nTraversal in Forward direction: ";
    while (head != NULL) {
        cout << " " << head->data << " ";
        last_node = head;
        head = head->next;
    }
    cout << "\nTraversal in Reverse direction: ";
    while (last_node != NULL) {
        cout << " " << last_node->data << " ";
        last_node = last_node->prev;
    }
}

//main program
int main() {
   /* Start with the empty list */
   struct Node* head = NULL;
   append_data(&head, "Red");
   append_data(&head, "Green");
   append_data(&head, "White");
   append_data(&head, "Orange");
   cout<<"Doubly linked list is as follows: ";  
   cout<<"\n---------------------------------";
   displayDlList(head);
   cout<<"\n\nInsert a new node at the middle position of the said Doubly linked list:";
   cout<<"\n-----------------------------------------------------------------------";
   insertAtMid(&head, "Pink");
   displayDlList(head);
   cout<<"\n\nInsert another new node at the middle position of the said Doubly linked list:";
   cout<<"\n-----------------------------------------------------------------------------";
   insertAtMid(&head, "Black");
   displayDlList(head);
   cout<<endl;
   return 0;
}
