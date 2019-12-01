#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int s_no;
char name[20];
struct node *next;
}*start=NULL;
typedef struct node NODE;
void dele_spec(int count)
{
    NODE*p,*lol;
    int i,loc;
    char  choice;
    p=start;
    if(count==0)
        printf("List is empty.");
    else if(count==1){
        printf("List have only one element.\n Do you want to delete it(Y/N)->");
        scanf("%s",&choice);
        if(choice=='y'||choice=='Y'){
            start=NULL;
            free(p);
        }
    }
    else{
        printf("Enter location of data->");
        scanf("%d",&loc);
        for(i=1;i<loc;i++){
            lol=p;
            p=p->next;
        }
        lol->next=p->next;
        p->next=NULL;
        free(p);
    }
}
void dele_end(int count)
{
    NODE *p,*temp;
    int i;
    p=start;
    if (count==0)
        printf("List is empty.\n");
    else if(count==1)
    {
        start=NULL;
        free(p);
    }
    else{
        for(i=1;i<count;i++)
        {
            temp=p;
            p=p->next;
        }
        temp->next=NULL;
        free(p);
    }
}
void dele_beg(int count)
{
    NODE *p;
    p=(NODE*)malloc(sizeof(NODE));
    p=start;
    if(count==0)
    {
        printf("List is empty.\n");
    }
    else{
        start=p->next;
    }
    free(p);

}
void insert_spec(int count)
{
    NODE *p,*lol;
    int i,loc;
    printf("Enter location number= ");
    scanf("%d",&loc);
    lol=start;
    if(loc>count)
        printf("Entered exceeded value of location.\n");
        else{
    p=(NODE*)malloc(sizeof(NODE));
            printf("Enter serial number=");
            scanf("%d",&p->s_no);
            printf("Enter name=");
            scanf("%s",&p->name);
            if(loc==1)
    {
       p->next=start;
       start=p;
    }
    else{
            for(i=2;i<loc;i++){
                    lol=lol->next;
                    }
            printf("%d",&lol->s_no);
            p->next=lol->next;
            lol->next=p;
            fflush(stdin);}
        }

}
void insert_start()
{
    NODE *p;
    char choice;
    do{
        p=(NODE*)malloc(sizeof(NODE));
        printf("Enter serial number=");
        scanf("%d",&p->s_no);
        printf("Enter name=");
        scanf("%s",&p->name);
        if(start==NULL){
            p->next=NULL;
        }
        else{
        p->next=start;
        }
        start=p;
        printf("Do you want to continue(Y/N)=");
        scanf("%s",&choice);
        fflush(stdin);
    }while(choice=='y'||choice=='Y');
}
int insert()
{
NODE *p, *temp,*q;
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
    printf("Do you want to continue(Y/N)=\n");
    scanf("%c",&choice);
    }
    while(choice=='y'||choice=='Y');}
void main()
{
int count=0,choice;
NODE *temp;
char repeat;
do{
printf("1.insert to last->\n2.Insert from start->\n3.Insert at any specific location->\n4.Delete from begining->\n5.Delete from end->\n6.Delete at any specific location->\n");
printf("Enter your choice=");
scanf("%d",&choice);
switch(choice){
case 1:
    insert();
    break;
case 2:
     insert_start();
     break;
case 3:
    insert_spec(count);
    break;
case 4:
    dele_beg(count);
    break;
case 5:
    dele_end(count);
    break;
case 6:
    dele_spec(count);
    break;
default:
    printf("Entered wrong choice.");
    return;}
count=0;
printf("Names in the linked list=\n");
temp=start;
while(temp!=NULL)
{
    printf("%d->%s\n",temp->s_no,temp->name);
    temp=temp->next;
    count++;
}
fflush(stdin);
printf("No. of elements in linked list=%d\n",count);
printf("Do you want to continue operations(Y/N)=");
scanf("%c",&repeat);
}while(repeat=='y'||repeat=='Y');
getch();
}
