#include<stdio.h>
#include<conio.h>
void main()
{
int limit,i,j,rows,colums,temp;
printf("Enter limit of matrix=(rows),(colums)");
scanf("%d%d",&rows,&colums);
int array[rows][colums],array2[rows][colums];
for(i=0;i<rows;i++)
{
    for(j=0;j<colums;j++)
    {
        printf("Enter array[%d][%d] element=",i+1,j+1);
        scanf("%d",&array[i][j]);
    }
}
printf("matrix 1\n");
for(i=0;i<rows;i++)
{
    for(j=0;j<colums;j++)
    {
       printf("%d  ",array[i][j]);
    }
    printf("\n");
}
for(i=0;i<rows;i++)
{
    for(j=0;j<colums;j++)
    {
      array2[i][j]=array[j][i];
    }
}
printf("matrix 2\n");
for(i=0;i<rows;i++)
{
    for(j=0;j<colums;j++)
    {
       printf("%d  ",array2[i][j]);
    }
    printf("\n");
}
getch();
}
