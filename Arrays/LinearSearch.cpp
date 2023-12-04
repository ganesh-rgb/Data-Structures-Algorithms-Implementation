#include<iostream>
using namespace std;
int main()
{
	int array[100],n,item,i;
	
	cout<<"Enter the size of the array: ";
	cin>>n;
	
	cout<<"Enter the elemnts of the array: ";
	for(i=0; i<n; i++)
	{
		cin>>array[i];
	}
	cout<<"Enter the element to be searched in array: ";
	cin>>item;
	
	for(i=0; i<item; i++)
	{
		if(array[i] == item)
		{
			cout<<"Element found at location "<<i;
		}
	}
}
