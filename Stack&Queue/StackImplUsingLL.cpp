#include<iostream>
#include<malloc.h>
using namespace std;

struct Node 
{
	int data;
	struct Node *next;
};

void push(struct Node **top, int value)
{
	Node *newnode = new Node();
	newnode->data = value;
	newnode->next = *top;
	*top = newnode;
	
}
void pop(struct Node **top)
{
	if(*top == NULL)
	{
		cout << "Stack Underflow" <<endl;
		return;
	}
	struct Node *temp = *top;
	*top = temp->next;
	free(temp);
	
}
void display(struct Node *top)
{
	struct Node *temp = top;
	while(temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
	
}


int main()
{
	
	struct Node *top = NULL;
	while (1)
	{
		int choice, value;
		cin >> choice;
		if (choice == 1)
		{
			cin>>value;
			push(&top,value);
		}
		else if (choice == 2)
		{
			pop(&top);
		}
		else if(choice == 3)
		{
			display(top);
		}
		else
		{
		    exit(0);	
		}
	}
	return 0;
}
