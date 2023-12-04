#include<iostream>

using namespace std;

#define SIZE 3
void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

int main()
{
	int value, choice;
	while(1)
	{
		cin >> choice;
		switch(choice)
		{
			case 1 : cin >> value;
			          push(value);
			          break;
			case 2 : pop();
		         	break;
		         	
		    case 3 : display();
		             break;
		    
		    case 4: exit(0);
		            break;
		    default : cout << "wrong selection!!!";
		            break;
		            
 			
		}
	}
	return 0;
}
void push(int value)
{
	if(top == SIZE-1)
	{
		cout << "stack is fuLL!!!! Insertion is not possible or Stack Overflow"<<endl;
	}
	else
	{
		top++;
		stack[top] = value;
		
	}
}
void pop()
{
	if(top == -1)
	{
		cout << "stack Underflow: "<<endl;
		
	}
	else
	{
		cout << "The deleted element from the stack is : "<<stack[top]<<endl;
		top--;
		
	}
}

void display()
{
	if(top == -1)
	{
		cout << "Stack is empty" << endl;
		
	}
	else
	{
		int i;
		for (i = top; i >= 0; i--)
		{
			cout << stack[i] << " " <<endl;
		}
	}
}
