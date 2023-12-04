//Deletion operation at END//
#include<stdio.h>
int main()
{
	int n,array[10],i;
	printf("Enter the size of an array");
	scanf ("%d",&n);
	printf("enter elements in an array");
	for( i=0; i<n; i++)
	scanf ("%d", &array[i]);
	printf("\nafter deletion");
	for( i=0; i<n-1; i++)
	printf("\n%d",array[i]);
	
}
