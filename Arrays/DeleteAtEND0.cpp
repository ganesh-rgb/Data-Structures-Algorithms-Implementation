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
	cout<<"The resultant array after deletion of element at END:";
	for(i=0; i<n-1; i++)
	{
		cout<<" "<<array[i];
		
	}
	return 0;
	
}
