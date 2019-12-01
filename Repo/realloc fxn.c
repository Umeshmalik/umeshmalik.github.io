#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
void main()
{
int *ptr,array[100],i,limit,sum=0;
float avg;
printf("Enter limit of array=");
scanf("%d",&limit);
ptr=(int*)malloc(limit*sizeof(int));
if(ptr==NULL)
{
printf("\n Required memory not available");
getch();
exit(0);
}
else
{
    ptr=realloc(ptr,limit*sizeof(int));
    printf("memory reallocated\n");
for(i=0;i<limit;i++)
{
printf("Enter array element %d=",i+1);
scanf("%d",ptr+i);
}
for(i=0;i<limit;i++)
{
sum+=(*(ptr+i));
}
printf("sum of %d array elements=%d",limit,sum);
avg=sum/(float)limit;
printf("\naverage of %d array elements=%f",limit,avg);
}
getch();
}
