#include<iostream>
using namespace std;
int main()
{
	int array[100],n,i,item;
	
	cout<<"Enter the size of the array";
	cin>>n;
	
	cout<<"Enter the elemnts of the array: ";
	for(i=0; i<n; i++)
	{
		cin>>array[i];
	}
	cout<<"Enter the element to insert at Beg: ";
	cin>>item;
	n++;
	
	for(i=n; i>1; i--)
	{
		array[i-1] = array[i-2];
	}
	array[0] = item;
	cout<<"The resultant array is:";
	for(i=0; i<n ; i++)
	{
		cout<<"\n"<<array[i];
	}
	return 0;
}
