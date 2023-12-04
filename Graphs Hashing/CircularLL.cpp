#include <iostream>
#include<malloc.h>
using namespace std;
struct Node 
{
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int newdata) 
{
   Node *newnode = new Node;
   Node *ptr = head;
   newnode->data = newdata;
   newnode->next = head;
   
   if (head!= NULL) 
   {
      while (ptr->next != head)
      ptr = ptr->next;
      ptr->next = newnode;
   } 
   else
   
   newnode->next = newnode;
   head = newnode;
}
void deletenode(int p)
{
     	if (head == NULL)
     	{
		cout<<"List is Empty"<<endl;}
	else
	{
		Node *temp, *ptr;
		if (p == 0) 	
		{
			cout<<"Element Deleted: "<<head->data<<endl;
			ptr = head;
			head = head->next;
			delete(ptr);}
		else
		{
			temp = ptr = head;
			while(p>0){
				--p;
				temp = ptr;
				ptr = ptr->next;}
			cout<<"Element Deleted: "<<ptr->data<<endl;
			temp->next = ptr->next;
			// free pth node
			free(ptr);
		}}}
		
		
void display() {
   struct Node* ptr;
   ptr = head;
   do {
      cout<<ptr->data <<" ";
      ptr = ptr->next;
   } while(ptr != head);
}
int main() 
{
    int pos;
    cin>>pos;
   insert(5);
   insert(6);
   insert(10);
   insert(12);
   insert(93);
   cout<<"The circular linked list is: ";
   display();
   deletenode(pos);
   display();
   return 0;}
