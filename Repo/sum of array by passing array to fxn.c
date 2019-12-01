#include<stdio.h>
#include<conio.h>
int sum(int array[100], int limit)
{
    int sum=0,i;
    for(i=0;i<limit;i++)
    {
        sum=sum+array[i];
    }
    return sum;
}
void main()
{
    int array[100],limit,i,a=0;
    printf("Enter limit of array=");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        printf("Enter %d element=",i+1);
        scanf("%d",&array[i]);
    }
    a=sum(array,limit);
    printf("sum of array=%d",a);
    getch();
}
