#include<iostream>
#include<malloc.h>
using namespace std;

struct Node 
{
	int data;
	struct Node *next;
};
void insert_in_the_beginning(struct Node **head_ref, int element)
{
	struct Node *newnode  = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = element ;
	newnode->next = *head_ref;
	*head_ref = newnode;
	
}
void print_list(struct Node *head_ref)
{
	struct Node *temp = head_ref;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}
void delete_at_the_end(struct Node **head_ref)
{
    struct Node *temp = *head_ref;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    
}
int main()
{
	struct Node *head = NULL;
	int n,element;
	cin>>n;
	for(int i=1; i<= n; i++)
	{
		cin>>element;
	     insert_in_the_beginning(&head, element);
	 }
	 cout << "Linked list before deletion: " << endl;
	 print_list(head);
	 cout << endl;
	 delete_at_the_end(&head);
	 cout << "Linked list after deletion: " << endl;
	 print_list(head);
	 return 0;
	
}
