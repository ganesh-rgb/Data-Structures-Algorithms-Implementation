//Queue implementation using Array//
#include<iostream>
using namespace std;
#define SIZE 3

int front = 0;
int rear = 0;
int queue[SIZE];

void enqueue(int value)
{
	if(rear == SIZE)
	{
		cout << "Queue Overflow:" <<endl;
	}
	else
	{
		queue[rear] = value;
		rear++;
	}
}
void dequeue()
{
	if(front == rear)
	{
	 cout << "Queue Underflow" <<endl;	
	}
	else
	{
		cout << "The deleted element is :" <<queue[front] <<endl;
		front++;
	}
}
void display()
{
 if(front == rear)
 {
 	cout << "Queue is empty" <<endl;
	 }	
	 else
	 {
	 	int i;
	 	for(i = front; i < rear; i++)
	 	{
	 		cout << queue[i] << " ";
	 		
		 }
		 cout << endl;
	 }
}

int main()
{
int choice,value;
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
		default: 
		{
			cout << "Wrong selection!!!" <<endl;
			break;
		}
	}
	
	}	
	return 0;
}
