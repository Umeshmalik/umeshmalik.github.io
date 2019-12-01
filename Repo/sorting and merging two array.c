#include<stdio.h>
#include<conio.h>
void main()
{
    int array0[100],array1[100],array2[100],array3[100],array[100],limit0,limit1,i,j,temp,m;
    printf("Enter limit of array 1=");
    scanf("%d",&limit0);
    printf("Enter limit of array 2=");
    scanf("%d",&limit1);
    for (i=0;i<limit0;i++)
    {
        printf("Enter %d element of  array 1=",i+1);
        scanf("%d",&array0[i]);
    }

    for (i=0;i<limit1;i++)
    {
        printf("Enter %d element of  array 2=",i+1);
        scanf("%d",&array1[i]);
    }
    printf("sorted 1 array=\n");
    for (i=0;i<limit0-1;i++)
    {
        for(j=i+1;j<limit0;j++)
        {
            if(array0[i]>array0[j])
            {
                temp=array0[i];
                array0[i]=array0[j];
                array0[j]=temp;
            }
        }
    }

    for (i=0;i<limit1;i++)
    {
        for(j=i+1;j<limit1;j++)
        {
            if(array1[i]>array1[j])
            {
                temp=array1[i];
                array1[i]=array1[j];
                array1[j]=temp;
            }
        }
    }

    for (i=0;i<limit0;i++)
    {
        printf("%d element of  array 1=%d\n",i+1,array0[i]);
    }
 printf("sorted 2 array=\n");
    for (i=0;i<limit1;i++)
    {
        printf("%d element of  array 2=%d\n",i+1,array1[i]);
    }
    j=0;
    i=0;
    m=0;
    while(i<limit0 && m<limit1)
    {
        if(array0[i]<array1[m])
        {
             array2[j++]=array0[i++];
        }
        else
        {
            array2[j++]=array1[m++];
        }

    }
    while(i<limit0)
    {
        array2[j++]=array0[i++];
    }
    while(m<limit1)
    {
        array2[j++]=array1[m++];
    }
    for(i=0;i<limit0+limit1;i++)
    {
        printf("%d element of array 3=%d\n",i+1,array2[i]);
    }
}
