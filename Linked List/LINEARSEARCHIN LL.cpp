#include<iostream>
#include<stdlib.h>

void create(int);
void search();

struct Node 
{
    int data;
    struct Node *next;
};

struct Node *head;

int main()
{
    int choice, item, loc;
    do 
    {
        cout << "1.create\n2.search\n3.exit\n4.enter your choice?";
        cin >> choice;
        
        switch(choice)
        {
            case 1: 
            cout << "\n Enter the item\n";
            cin >> item;
            create(item);
            break;
            
            case 2:
            search();
            
            case 3:
            exit(0);
            break;
            
            default: 
            cout << "\nPlease enter a valid choice\n";
            
        }
		w      hile(choice != 3)
    }
}

void create(int item)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node*));
    if(ptr == NULL)
    {
        cout << "\nOVERFLOW\n";
    }
    else
    {
        ptr->data = itm;
        ptr->next = head;
        head = ptr;
        cout << "\nNode inserted\n";
        
    }
}
void search()
{
    struct Node *ptr;
    int item i=0,flag;
    
    ptr = head;
    if(ptr == NULL)
    {
        cout << "\nempty list\n";
    }
    else
    {
        cout << "\nEnter the item which you want to search?\n";
        cin >> item;
        
        while(ptr!= NULL)
        {
            if(ptr->data == item)
            {
                cout << "ITEM FOUND AT THE LOCATION"<<i+1<<endl;
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
            
        }
        if(flag == 1)
        {
            cout << "ITEM NOT FOUND\n";
            
        }
    }
}
