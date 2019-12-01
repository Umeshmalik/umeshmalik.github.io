#include<stdio.h>
#include<conio.h>
int hello();
void main()
{
    int array[100],limit,search,i,position;
    printf("Enter limit of array=");
    scanf("%d",&limit);
    for(i=0;i<limit;i++)
    {
        printf("Enter %d element=",i+1);
        scanf("%d",&array[i]);
    }
    printf("Enter number to search=");
    scanf("%d",&search);
    position = hello(array, search, limit);
    printf("position of number=%d",position);
}
int hello(int array[100], int search, int limit)
{
    int i;
    for(i=0;i<limit;i++)
    {
        if(array[i]==search)
         {
             return i+1;
         }
    }

}
