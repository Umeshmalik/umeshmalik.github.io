#include<stdio.h>
#include<conio.h>
void main()
{
int array[100],limit,i;
printf("Enter limit of array=");
scanf("%d",&limit);
for(i=0;i<limit;i++)
{
printf("Enter %d element=",i+1);
scanf("%d",&array[i]);
}
for(i=0;i<limit;i++)
{
printf("\n%d element=%d",i+1,array[i]);
}
getch();
}
