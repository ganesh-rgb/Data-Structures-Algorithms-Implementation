#include<iostream>
#include<stdlib.h>
using namespace std;

struct node {
    int num;
    struct node * preptr;
    struct node * nextptr;
}*stnode, *ennode;
 

void DlListcreation(int n);
void DlLinsertNodeAtEnd(int num);
void displayDlList();

int main()
{
    int n,num1;
    stnode = NULL;
    ennode = NULL;
	
    cout<<" Input the number of nodes : ";
    cin>>n;
    DlListcreation(n); 
    displayDlList();
    cout<<" Input data for the last node : ";
    cin>>num1;
    DlLinsertNodeAtEnd(num1);
    displayDlList();
    return 0;
}
 
void DlListcreation(int n)
{
    int i, num;
    struct node *fnNode;
 
    if(n >= 1)
    {
        stnode = (struct node *)malloc(sizeof(struct node));
 
        if(stnode != NULL)
        {
            cout<<" Input data for node 1: "; // assigning data in the first node
            cin>>num;
 
            stnode->num = num;
            stnode->preptr = NULL;
            stnode->nextptr = NULL;
            ennode = stnode;
            for(i=2; i<=n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    cout<<" Input data for node "<< i<<": ";
                    cin>>num;
                    fnNode->num = num;
                    fnNode->preptr = ennode;    // new node is linking with the previous node
                    fnNode->nextptr = NULL;
                    ennode->nextptr = fnNode;   // previous node is linking with the new node
                    ennode = fnNode;            // assign new node as last node
                }
                else
                {
                    cout<<" Memory can not be allocated.";
                    break;
                }
            }
        }
        else
        {
            cout<<" Memory can not be allocated.";
        }
    }
}

void DlLinsertNodeAtEnd(int num)
{
    struct node * newnode;
 
    if(ennode == NULL)
    {
        cout<<" No data found in the list!\n";
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->num = num;
        newnode->nextptr = NULL;        // set next address field of new node  is NULL
        newnode->preptr = ennode;       // previous address of new node is linking with ending node
        ennode->nextptr = newnode;      // next address of ending node is linking with new node
        ennode = newnode;               // set the new node as ending node  
    }
}

void displayDlList ()
{
  struct node *tmp;
  tmp = stnode;
  int n = 1;
  while (tmp != NULL)
    {
      cout << " node " << n << ": " << tmp->num << "\n";
      n++;
      tmp = tmp->nextptr;	// current pointer moves to the next node
    }
}
