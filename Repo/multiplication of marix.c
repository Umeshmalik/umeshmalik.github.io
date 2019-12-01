#include<stdio.h>
#include<conio.h>
void main()
{
    int array1[3][3],mul[3][3],sum=0,array2[3][3],i,k,j;
    printf("Enter the matrix 1=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    printf("Enter the matrix 2=");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
    printf("first matrix=\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",array1[i][j]);
        }
        printf("\n");
    }
    printf("second matrix=\n");
 for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",array2[i][j]);
        }
        printf("\n");
    }
for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum+=array1[i][k]*array2[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
printf("multiplication of array=\n");
for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    }
getch();
}
