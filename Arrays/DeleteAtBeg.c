//deletion operation in an array at beg//
#include<stdio.h>
int main()

{
	int n, array[10],i;
	printf("Enter the size of an array");
	scanf ("%d", &n);
	printf("\nenter elements in an array");
	for(i=0; i<n; i++)
	scanf("%d",&array[i]);
	n--;
	
	for(i=0; i<n; i++)
	array[i] = array[i+1];
	printf("\nafter deletion");
	for(i=0; i<n; i++)
	printf("\n%d",array[i]);
}
