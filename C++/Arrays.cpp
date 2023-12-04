#include<iostream>
using namespace std;
int main()
{
    int a[7]={3,4,5,6,7,8,9},n,position,index;
    for(int i=0;i<7;i++)
{
    cout<<a[i]<<endl;
    
}
  cout<<"Traversing in backward direction"<<endl;
  for(int i=6;i>0;i--)
{
    cout<<a[i]<<endl;
    
}
  char ch[4],item;
  cout<<"\n Enter the elements you want to insert"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>ch[i];
  }
  
  cout<<"\n Elements after insertion"<<endl;
  for(int i=0;i<n;i++)
  {
      cout<<ch[i]<<endl;
  }
  
  cout<<"Item to be searched"<<endl;
  cin>>item;
  for(int i=0;i<n;i++)
  {
      if(ch[i]==item)
      {
         index=i;
         break;
          
      }
      
  }
   cout<<"element found at "<< index <<endl;
   
  cout<<"Enter the position from where you want to delete element
  from array"<<endl;
  cin>> position;
  for(int j=position;j<n-1;j++)
  {
      ch[j]=ch[j+1];
  }
  cout<<"new array"<<endl;
  for(int j=0;j<n-1;j++)
  {
      cout<< ch[j]<<endl;
  }
  
}


//searching//

#include<iostream>
using namespace std;
int main()
    
{
   int a[5]={4,5,6,7,1,2};
   int item,index;
  cout<<"Enter element which is to searched";
   cin>>item;
   for(int i=0;i<5,i++)
{
   if(a[i]==item)
  {
     index=i;
         break;
                      }
                         }
    cout<<"Element exist at:- "<<index<<endl;
    
                                }
                                
                                
//Binary search//

#include<iostream>
using namespace std;

int main()
{
int a[100];
int l,h,mid,key,n;
int f=0; // it is use when element not found
cout<<"Enter the size of array :";
cin>>n;
cout<<"Enter the array element :"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Enter the key to search :";
cin>>key;
l=0;h=n-1;
while(l<=h)
{
mid=(l+h)/2;
if(key==a[mid])
{
cout<<"Element found at position:"<<mid+1<<endl;
f=1;
break;
}
else if(key<a[mid])
h=mid-1;
else
l=mid+1;
}
if(f==0)
cout<<"Element not found "<<endl;
return 0;}

//sorting//

#include<iostream>
using namespace std;
int main(){
    int a[5]={8,9,6,1,0};
    int temp;
    for(int i=0;i<5-1;i++){
        for(int j=0;j<5-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}

#include<iostream>
using namespace std;
int main(){
    int temp,minpos,n=5;
    int a[5]={34,98,12,45,2};
    for(int i=0;i<n-1;i++){
        minpos=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minpos]){
                minpos=j;
            }
        }
        if(minpos!=i){
            temp=a[i];
            a[i]=a[minpos];
            a[minpos]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
  }
