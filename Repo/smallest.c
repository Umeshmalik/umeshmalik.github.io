//Program to find largest and smallest number in an array
#include<stdio.h>
#include<conio.h>
void main()
{
	int array[100], largest, smallest, i, limit;
	printf("Enter limit of array=");
	scanf("%d",&limit);
	for(i=0;i<limit;i++)
	{printf("enter the array element %d=",i+1);
	   scanf("%d",&array[i]);
	}
	smallest=array[0];
	largest=array[0];
	for(i=0;i<limit;i++)
	{
	  if(array[i]<smallest)
	  {smallest=array[i];}
	 }
	 for(i=0;i<limit;i++)
	{
	  if(array[i]>largest)
	  {largest=array[i];}
	 }
	printf("smallest number=%d\n",smallest);
	printf("largest number=%d",largest);
}
