// You are using GCC
#include <iostream>
#include<malloc.h>
using namespace std;
struct node // node declaration 
{
   int p;
   int info;
    node *link;
};
class Priority_Queue {
   private:
      //Declare a front pointer f and initialize it to NULL.
      node *f;
   public:
      Priority_Queue() //constructor 
      {
         f = NULL;
      }
      void insert(int i, int p) {
         node *t, *q;
         t = new node;
         t->info = i;
         t->p = p;
         if (f == NULL || p < f->p) {
            t->link= f;
            f = t;
         } else {
            q = f;
            while (q->link != NULL && q->link->p <= p)
               q = q->link;
               t->link = q->link;
               q->link = t;
         }
      }
      void del() {
         node *t;
         if(f == NULL) //if queue is null
            cout<<"Queue Underflow\n";
         else {
            t = f;
            cout<<"Deleted item is: "<<t->info<<endl;
            f = f->link;
            free(t);
         }
      }
      void show() //print queue 
      {
         node *ptr;
         ptr = f;
         if (f == NULL)
            cout<<"Queue is empty\n";
         else {
            cout<<"Queue is :\n";
            cout<<"Priority Item\n";
            while(ptr != NULL) {
               cout<<ptr->p<<" "<<ptr->info<<endl;
               ptr = ptr->link;
            } }}};
int main() {
   int c, i, p;
   Priority_Queue pq;
   do//perform switch opeartion 
   {
      cout<<"1.Insert\n";
      cout<<"2.Delete\n";
      cout<<"3.Display\n";
      cout<<"4.Exit\n";
      cout<<"Enter your choice : ";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Input the item value to be added in the queue : ";
            cin>>i;
            cout<<"Enter its priority : ";
            cin>>p;
            pq.insert(i, p);
            break;
         case 2:
            pq.del();
            break;
         case 3:
            pq.show();
            break;
         case 4:
            break;
         default:
         cout<<"Wrong choice\n";
      }
   }
   while(c != 4);
   return 0;
}
