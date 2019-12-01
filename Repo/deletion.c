#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{

    int array[100],limit,i,loc,item;
    printf("Enter limit of array=");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        printf("Enter %d element=",i+1);
        scanf("%d",&array[i]);
    }
    printf("Enter location to delete=");
    scanf("%d",&loc);

    if(loc>limit)
    {
        printf("Location is bigger than limit!\nPlease enter location less than limit.");
    }
    else
    {
        item=array[loc];
        for(i=loc-1;i<limit;i++)
        {
            array[i]=array[i+1];
        }
        for(i=0;i<limit-1;i++)
        {
            printf("%d element=%d\n",i+1,array[i]);
        }
    }
    getch();
}
