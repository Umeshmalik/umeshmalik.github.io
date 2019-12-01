#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int s_no;
char name[20];
struct node *next;
}*start=NULL;
typedef struct node NODE;
static int count=0;
void dele_spec()
{
    NODE*p,*a;
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
            count--;
        }
    }
    else{
        printf("Enter location of data->");
        scanf("%d",&loc);
        for(i=1;i<loc;i++){
            a=p;
            p=p->next;
        }
        a->next=p->next;
        p->next=NULL;
        free(p);
        count--;
    }
}
void dele_end()
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
        count--;
    }
    else{
        for(i=1;i<count;i++)
        {
            temp=p;
            p=p->next;
        }
        temp->next=NULL;
        free(p);
        count--;
    }
}
void dele_beg()
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
        count--;
    }
    free(p);

}
void insert_spec()
{
    NODE *p,*a;
    int i,loc;
    printf("Enter location number= ");
    scanf("%d",&loc);
    a=start;
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
       count++;
    }
    else{
            for(i=2;i<loc;i++){
                    a=a->next;
                    }
            printf("%d",&a->s_no);
            p->next=a->next;
            a->next=p;
            count++;
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
            count++;
        }
        else{
        p->next=start;
        count++;
        }
        start=p;
        printf("Do you want to continue(Y/N)=");
        scanf("%s",&choice);
        fflush(stdin);
    }while(choice=='y'||choice=='Y');
}
int insert_last()
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
            count++;
        }
        else{
            q=start;
            while(q->next!=NULL)
                q=q->next;
            p->next=q->next;
            q->next=p;
            count++;
        }fflush(stdin);
    printf("Do you want to continue(Y/N)=\n");
    scanf("%c",&choice);
    }
    while(choice=='y'||choice=='Y');}
void main()
{
int choice,loc;
NODE *temp;
char repeat;
do{
printf("1.insert to last->\n2.Insert from start->\n3.Insert at any specific location->\n4.Delete from begining->\n5.Delete from end->\n6.Delete at any specific location->\n7.Search element->\n8.Traverse->\n");
printf("Enter your choice=");
scanf("%d",&choice);
switch(choice){
case 1:
    insert_last();
    break;
case 2:
     insert_start();
     break;
case 3:
    insert_spec();
    break;
case 4:
    dele_beg();
    break;
case 5:
    dele_end();
    break;
case 6:
    dele_spec();
    break;
case 7:
    loc=search();
    if(loc==0)
        printf("Element not found.\n");
    else
        printf("item found location=%d\n",loc);
    break;
case 8:
    traverse();
    break;
default:
    printf("Entered wrong choice.");
    return;}
fflush(stdin);
printf("Do you want to continue operations(Y/N)=");
scanf("%c",&repeat);
}while(repeat=='y'||repeat=='Y');
getch();
}
void traverse(){
    NODE *temp;
printf("Names in the linked list=\n");
temp=start;
while(temp!=NULL)
{
    printf("%d->%s\n",temp->s_no,temp->name);
    temp=temp->next;
}
printf("No. of elements in linked list=%d\n",count);

}
int search(){
int item,i=0,j=0;
NODE *p;
printf("Enter element to search->");
scanf("%d",&item);
p=start;
while(p!=NULL){
    if(p->s_no==item){
            i++;
            j++;
        return i;
    }
    i++;
    p=p->next;
}
if(j==0)
    return j;
}
