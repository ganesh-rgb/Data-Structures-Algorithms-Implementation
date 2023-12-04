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
Node* temp = head;
while(temp->next!= NULL)

temp=temp->next;
temp->next=n;

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
void minimum() {
Node* temp = head;
int min = head->data;
while(temp!=NULL) {
if(temp->data < min)
min = temp->data;
temp=temp->next;
}
cout<<"Minimum element is "<<min;
}
void maximum() {
Node* temp = head;
int max = head->data;
while(temp!=NULL) {
if(temp->data > max)
max = temp->data;
temp=temp->next;
}
cout<<"Maximum element is "<<max<<"\n";
}

void search(int d) {
Node* temp = head;
while(temp!=NULL)
{
if(temp->data==d) {
cout<<"Element found\n";
break;
}
temp = temp->next;
}
if(temp==NULL) {
cout<<"No\n";
}
}
void deleteNode(int d) //deletion from front
{
Node* temp = head;
Node* tempPrev = head;
if(head->data == d) 
{
head = head->next;
}


temp = temp->next;
    
}
};
int main()
{
List l;
int x;
cout<<"Enter 5 numbers";
for(int i=0;i<5;i++)
{
cin>>x;
l.insertlist(x);
}
cout<<"Enter number to be searched ";
cin>>x;
l.traversalList();
l.search(x);
l.minimum();
l.maximum();
cout<<"Enter number to be deleted ";
cin>>x;
l.deleteNode(x);
cout<<"Linked list after deletion ";
l.traversalList();}
