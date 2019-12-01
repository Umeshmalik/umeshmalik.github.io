#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int s_no;
char name[20];
struct node *next;
}*start=NULL;
typedef struct node NODE;
void main()
{

    NODE *p, *temp,*q;
    int count=0;
    char choice;
    do{
        p=(NODE*)malloc(sizeof(NODE));
        printf("Enter the serial number=");
        scanf("%d",&p->s_no);
        printf("Enter name=");
        scanf("%s",&p->name);
        if(start==NULL)
        {
            p->next=start;
            start=p;
        }
        else{
            q=start;
            while(q->next!=NULL)
                q=q->next;
            p->next=q->next;
            q->next=p;
        }fflush(stdin);
    printf("Do you want to continue(Y/N)=");
    scanf("%c",&choice);
    }
    while(choice=='y'||choice=='Y');
printf("Names in the linked list=");
temp=start;
while(temp!=NULL)
{
    printf("%d->%s\n",temp->s_no,temp->name);
    temp=temp->next;
    count++;
}
printf("No. of elements in linked list=%d",count);
getch();
}
