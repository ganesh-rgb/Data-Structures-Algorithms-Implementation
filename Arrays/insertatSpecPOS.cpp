#include<stdio.h>
int main()
{
	int array[100],pos,size,val;
	printf("Enter the size of array:");
	scanf("%d", &size);
	printf("\nEnter %d elements:", size);
	for(int i=0; i<size; i++)
	scanf("%d", &array[i]);
	printf("\nEnter the insertion location:");
	scanf ("%d",&pos);
	printf("\nEnter the value to insert:");
	scanf("%d",&val);
	
	for(int i=size-1; i>=pos; i--)
	array[i+1] = array[i];
	array[pos-1] = val;
	printf("\nResultant array is:");
	for (int i=0; i<=size; i++)
	printf("%d\n",array[i]);
	return 0;
}
