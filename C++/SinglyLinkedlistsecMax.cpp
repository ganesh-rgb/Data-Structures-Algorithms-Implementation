#include<iostream>
using namespace std;
class Node 
{
    public:
    int data;
    Node* next;
};
class List
{
    private:
    Node* head;
    public:
    List()
    {
    head=NULL;
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
    void deletenode(int p)
    {
     	if (head == NULL)
	    {
		cout<<"List is Empty"<<endl;
	    }
	else
	{
		Node *temp, *ptr;
		if (p == 0) 
		{
			cout<<"Element Deleted: "<<head->data<<endl;
			ptr = head;
			head = head->next;
			delete(ptr);
		}
		else
		{
			temp = ptr = head;
			while(p>0)
			{
				--p;
				temp = ptr;
				ptr = ptr->next;
			}
			cout<<"Element Deleted: "<<ptr->data<<endl;
			temp->next = ptr->next;
			// free pth node
			free(ptr);
		}
	
	}
}
    void traversalList()
    {
        Node* temp=head;
         while(temp!=NULL)
            {
                cout<<temp->data<< " ";
                temp=temp->next;
            }
            cout<< endl;
        
    }
    void findsecondmax(int n)
    {
    Node* temp = head;
    int max=0,min=0,count=0,max2;
    while(temp!=NULL )

   if(temp->data > max)
   {
    max2=max;
    max=temp->data;

    }
else if(temp->data > max){
    max2=temp->data;
}

else{
temp = temp->next;
}

cout<<"2nd max element is:"<<max2;

}
   /* void findsecondmin(int n)
    {
    Node* temp = head;
    int min=0,count=0,min2;
    while(temp!=NULL )

   if(temp->data < min)
   {
    min2=min;
    min=temp->data;

    }
else if(temp->data > min){
    min2=temp->data;
}

else{
temp = temp->next;
}

cout<<"2nd min element is:"<<min2;

}*/
};
int main()
{
    List l;
 int n,position;
cout << "Enter the number: ";
for (int i = 0; i < 5; i++)
{
cin >> n;
l.insertlist(n);
}

    l.traversalList();
l.findsecondmax(n);    
cout<<"Enter the position from where you want to delete the element"<<endl;
cin>>position;
l.deletenode(position);
l.traversalList();
//l.findsecondmin(n);
}
