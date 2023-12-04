//Insertion at Beginning of Singly linked list//
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
	struct Node *newnode =  (struct Node*)malloc(sizeof(struct Node));\
	newnode->data = element;
	newnode->next = *head_ref;
	*head_ref = newnode;
	
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
	struct Node *head = NULL;
	int n, element;
	cin >> n;
	for (int i = 1; i<= n; i++)
	{
		cin >> element;
		insert_in_the_beginning(&head, element);
	}
	print_list(head);
	return 0;
}
