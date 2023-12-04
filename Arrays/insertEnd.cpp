#include<iostream>
using namespace std;
int main()
{
	int array[5], i, values;
	
	cout<<"Enter the 5 elements: ";
	for(i=0;i<5; i++)
	{
		cin>>array[i];
	}
	cout<<"Enter the element to be insert: ";
	cin>>values;
	array[i] = values;
	
	cout<<"The resultant array after insertion is: ";
	for(i=0; i<6; i++)
	{
		cout<<" "<<array[i];
	}
	return 0;
}
