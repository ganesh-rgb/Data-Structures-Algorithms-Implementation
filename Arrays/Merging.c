//Merging operation in an array//
#include<stdio.h>
int main()
{
	//Declaring the size of arrays
	
	int s1,s2,s3,i,j;
	
	printf("\n Enter the size of 1st array ");
	scanf ("%d", &s1);
	
	printf("\n Enter the size of 2nd array");
	scanf ("%d", &s2);
	s3 = s1 + s2;
	printf("\n Enter the elements of 1st array\n");
	
	//Declaring the arry
	int  arr1[s1],arr2[s2],arr3[s3];
	for (i=0; i<s1; i++)
	{
		scanf ("%d", &arr1[i]);
		arr3[i] = arr1[i];
		
	}
	int k = s1;
	printf("\n Enter the elements of 2nd Array\n");
	for( i=0; i<s2; i++)
	//Arr  initialised
	{
		scanf("%d", &arr2[i]);
		arr3[k] = arr3[i];
		k++;
		
	}
	printf ("\n The merged array before sorting: \n\t");
	for ( i=0; i<s3; i++)
	printf("%d", arr3[i]);
//print the merged arr before sorting//
printf("\n The merged array after sorting\n\t");
for (i=0; i<s3; i++)
{
	int tem;
	for (j=i+1; j<s3; j++)
	{
		if (arr3[i]>arr3[j])
		{
			tem = arr3[i];
			arr3[i] = arr3[j];
			arr3[j] = tem;
		}
	}
	}	
	for ( i=0; i<s3; i++)
	//printing the sorted array
	{
		printf("%d",arr3[i]);
	}
}
