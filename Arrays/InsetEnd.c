//Insertion at END of array//
#include<stdio.h>
#include<conio.h>
int main()
{
int array[10],i,values;
printf("Enter 5 elements:");
for(i=0; i<5; i++)
scanf("%d",&array[i]);


printf("\n Enter element to insert:");
scanf("%d",&values);
array[i] = values;
printf("\nThe New Array is:");

for(i=0; i<6; i++)
printf("%d",array[i]);
getch();
return 0;
}
