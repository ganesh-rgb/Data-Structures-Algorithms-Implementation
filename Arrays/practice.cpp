#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
	int i,j,key;
	for(i=1; i<n; i++)
	{
		key = arr[i];
		j = i - 1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}
}
void printArray(int arr[], int size)
{
	int i;
	for(i=0; i<size; i++)
	cout<<" "<<arr[i];
	
}
int main()
{
	int arr[] = {23,45,56,78,90};
	int N = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,N);
	printArray(arr,N);
	return 0;
	
}
