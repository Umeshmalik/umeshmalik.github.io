#include<stdio.h>
#include<conio.h>
void main()
{
int *ptr;
int limit,i;
printf("enter limit of array=");
scanf("%d",&limit);
for(i=0;i<limit;i++)
{
printf("enter %d element=",i+1);
scanf("%d",ptr+i);
}
for(i=0;i<limit;i++)
{
printf("element %d=%d\n",i+1,*ptr+i);
}
getch();
}
