#include<stdio.h>
int main()
{
	int array[100],pos,n,val,i;
	printf("Enter the size of array:");
	scanf ("%d", &n);
	
	printf("\n Enter %d elements:",size);
	for ( i=0; i<n; i++)
	scanf ("%d", &array[i]);
	
	printf("\nEnter the insertion location:");
	scanf ("%d", &pos);
	
	printf("\nEnter the value to insert:");
	scanf("%d",&val);
	
	for( i=n-1; i>=pos-1; i--)
	array[i+1] = array[i];
	array[pos-1] = val;
	
	printf("\nResultant array is:");
	for ( i=0; i<=n; i++)
	printf("%d\n",array[i]);
	return 0;
	
}
