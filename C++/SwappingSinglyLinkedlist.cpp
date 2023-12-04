#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
class  list {
  private:
  Node* head;
  public:
  list()
  {
      head=NULL;
      
  }

void swapping()
{
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL)
    {
        swap(temp->data,temp->next->data);
        temp=temp->next->next;
    }
}
void insertlist(int d)
    {
        Node* n=new Node;
        n->data=d;
        n->next=NULL;
        if(head==NULL)
        {
            head=n;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=NULL)
            
                temp=temp->next;
                temp->next=n;
            
        }
    }
    void traversalList()
    {
        Node* temp=head;
         while(temp!=NULL)
            {
                cout<<temp->data<< "  ";
                temp=temp->next;
            }
            cout<< endl;
        
    }    
};
int main()
{
    list l;
    int n;
    cout<<"Enter the number of elements"<<endl;
 for(int i=0;i<5;i++)
 {  
    cin>>n; 
    l.insertlist(n);
}
   l.traversalList();
   l.swapping();
   l.traversalList();
    
}
