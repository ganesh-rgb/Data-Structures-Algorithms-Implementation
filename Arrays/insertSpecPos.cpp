#include<iostream>
using namespace std;
int main()
{
	int array[100],n,i,pos,val;
	
	cout<<"Enter the size of the array: ";
	cin>>n;
	
	cout<<"Enter the element of the array:";
	for(i=0; i<n; i++)
	{
		cin>>array[i];
	}
	cout<<"Enter the position to insert";
	cin>>pos;
	
	cout<<"Enter the value to insert";
	cin>>val;
	
	for(i=n-1; i>pos-1; i--)
	{
		array[i+1] = array[i];
		array[pos-1] = val;
		
	}
	cout<<"The resultant array is: ";
	for(i=0; i<=n; i++)
	{
		cout<<"\n"<<array[i];
	}
	return 0;
}
