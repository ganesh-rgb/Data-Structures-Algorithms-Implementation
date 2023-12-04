#include<iostream>
#include<malloc.h>
using namespace std;

struct Node 
{
	int data;
	struct Node *next;
	
} *front, *rear;

void enqueue(int value)
{
	Node *newnode = new Node();
	newnode->data = value;
	newnode->next = NULL;
	if(front == NULL && rear  == NULL)
	{
		front = rear = newnode;
		
	}
	else
	{
		rear->next = newnode;
		rear = newnode;
	}
}
void dequeue()
{
	struct Node *temp = front;
	if(front == NULL)
	{
		cout <<"Queue Underflow: "<<endl;
	}
	else
	{
		cout << "The deleted element is: " << front->data << endl;
		front = front->next;
		if(front == NULL)
		{
			rear = NULL;
			
		}
		free(temp);
		
		
		
	}
}
void display()
{
	struct Node *temp = front;
	while(temp != NULL)
	{
		cout << temp -> data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int main()
{
	int choice, value;
	
	
	while(1)
	{
		cin >> choice;
		switch(choice)
		{
			case 1: 
			{
				cin >> value;
				enqueue(value);
				break;
			}
			case 2: 
			{
				dequeue();
				break;
			}
			case 3: 
			{
				display();
				break;
			}
			case 4: 
			{
				exit(0);
				break;
			}
		}
	}
	return 0;
}
