//Travsersing of singly Linked list//
#include<malloc.h>
#include<iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
};
void insert_at_the_end(struct Node **head_ref, int element)
{
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    newnode->data  = element;
    newnode->next = NULL;
    
    if(*head_ref == NULL)
    {
        *head_ref = newnode;
        return;
    }
    else 
    {
        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = newnode;
        
    }
}
void print_list(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

int main()
{
    struct Node*head = NULL;
    int n, element;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>element;
        insert_at_the_end(&head, element);
        
    }
    print_list(head);
}
