#include<iostream>
using namespace std;
int main()
{
	int array[100],n,i;
	
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter the elements of the array: ";
	for(i=0; i<n; i++)
	{
		cin>>array[i];
	}
	n--;
	
	for(i=0; i<n; i++)
	{
		array[i] = array[i+1];
		
	}
	cout<<"The resultant array after deletion";
	
	for(i=0; i<n; i++)
	{
		cout<<" "<<array[i];
	}
	return 0;
}
