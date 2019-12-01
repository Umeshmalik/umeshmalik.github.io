#include<stdio.h>
#include<conio.h>
void main()
{
    int array[100],limit,i,j,temp;
    printf("Enter limit of array=");
    scanf("%d",&limit);
    for (i=0;i<limit;i++)
    {
        printf("Enter %d element of  array=",i+1);
        scanf("%d",&array[i]);
    }
    for(i=1;i<=limit;i++)
    {
        temp=array[i];
        j=i-1;
        while(temp<array[j] && j>=0)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
    for(i=0;i<limit;i++)
    {
        printf("element %d=%d\n",i+1,array[i]);
    }
    getch();
}
