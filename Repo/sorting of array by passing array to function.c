#include<stdio.h>
#include<conio.h>
int sorting(int array[100], int limit)
{
    int i,j,t;
    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(array[i]>array[j])
            {
                t=array[i];
                array[i]=array[j];
                array[j]=t;
            }
        }
    }
    return array;
}
void main()
{
    int array[100],limit,j,i;
    printf("Enter limit of array=");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        printf("Enter %d element of array=",i+1);
        scanf("%d",&array[i]);
    }
    sorting(array, limit);
     for(i=0;i<limit;i++)
    {
        printf("array %d =%d\n",i+1,array[i]);
    }
}
