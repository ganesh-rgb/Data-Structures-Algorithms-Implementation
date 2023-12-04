#include<stdio.h>  
#include<stdlib.h>  
void create(int);  
void deletitionAtEnd();  
struct node  
{  
    int data;  
    struct node *next;  
    struct node *prev;  
};  
struct node *head;  
void main ()  
{  
    int choice,item;  
    do   
    {  
        printf("1.Insert Node\n2.Delete node from the end\n3.Exit\n4.Enter your choice:\n");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            printf("\nEnter the element to insert:\n");  
            scanf("%d",&item);  
            create(item);  
            break;   
            case 2:  
            deletitionAtEnd();  
            break;   
            case 3:  
            exit(0);  
            break;    
            default:  
            printf("\nPlease enter a valid choice.\n");  
        }  
 
    }while(choice != 3);  
}  
void create(int item)  
{  
 
   struct node *ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW\n");  
   }  
   else  
   {  
 
 
   if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
   }  
   else   
   {  
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
    printf("\nNode Inserted Successfully!!\n");  
}  
 
}  
void deletitionAtEnd()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW\n");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nNode Deleted Successfully!!\n");  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != NULL)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = NULL;   
        free(ptr);  
        printf("\nNode Deleted Successfully!!\n");  
    }  
}
