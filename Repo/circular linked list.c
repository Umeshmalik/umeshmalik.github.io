#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node{
int s_no;
char name[20];
struct node *next;
}*start=NULL,*last=NULL;
typedef struct node NODE;
static int count=0;
void main()
{
    NODE *temp;
    int c,i;
    char m;
    do{
    printf("Enter your choice->\n1.Insert elements from starting->\n2.Insert elements from last->\n3.Insert at specific location->\n4.Delete from start->\n5.Delete from last->\n6.Delete specific location->\n");
    scanf("%d",&c);
    switch(c){
        case 1:
            insert_first();
            break;
        case 2:
            insert_last();
            break;
        case 3:
            insert_spec();
            break;
        case 4:
            delete_start();
            break;
        case 5:
            delete_last();
            break;
        case 6:
            delete_spec();
            break;
        default:
            printf("Entered wrong choice.\n");
            break;}
    temp=start;
    printf("Total elements->%d\n",count);
    printf("Linked list=\n");
    if(start==NULL){
            printf("Empty.\n");}
    else{
            //have to apply different method for traversing list (count system) because while or do while is not appropriate
            while(temp->next=start){
                    printf("%d->%s\n",temp->s_no,temp->name);
            temp=temp->next;
                  }
    }
    printf("Do you want more operations(Y/N)->");
    scanf("%s",&m);
    }while(m=='y'||m=='Y');
    getch();
}
int insert_first(){
 NODE *p;
    char c;
    do{
    p=(NODE*)malloc(sizeof(NODE));
    printf("Enter the element->");
    scanf("%d",&p->s_no);
    printf("Enter name->");
    scanf("%s",&p->name);
    if(start==NULL){
        p->next=p;
        start=p;
        last=p;
        count++;
    }
    else{
        p->next=start;
        start=p;
        count++;
        last->next=p;
    }
    fflush(stdin);
    printf("Do you want to add more elements(Y/N)->");
    scanf("%c",&c);
    }while(c=='y'||c=='Y');
}
int insert_last(){
NODE *p,*q;
char c;
int i;
do{
    q=start;
    p=(NODE*)malloc(sizeof(NODE));
    printf("Enter element->");
    scanf("%d",&p->s_no);
    printf("Enter name->");
    scanf("%s",&p->name);
    if(start==NULL){
        start=p;
        p->next=p;
        last=p;
        count++;
    }
    else{
        for(i=1;i<count;i++){
            q=q->next;
        }
        q->next=p;
        p->next=start;
        last=p;
        count++;
    }
    fflush(stdin);
    printf("Do you want to add more->");
    scanf("%c",&c);
}while(c=='y'||c=='Y');
}
int delete_start(){
NODE *p;
char c;
do{
p=start;
if(start==NULL){
printf("list is empty.\n");
}
else if(count==1){
    start=NULL;
    last=NULL;
    count--;
}
else{

    start=p->next;
    last->next=p->next;
    count--;
}
free(p);
printf("Do you want to delete more(Y/N)->");
scanf("%s",&c);
}while(c=='y'||c=='Y');
}
int delete_last(){
NODE *p,*q;
char c;
do{
    p=start;
    if(start==NULL){
        printf("list have not any element.\n");
    }
    else if(count==1){
        start=NULL;
        last=NULL;
        count--;
    }
    else{
    while(p!=last){
        q=p;
        p=p->next;
    }
    last=q;
    q->next=start;
    count--;
    }
    free(p);
    printf("Do you want to delete more(Y/N)->");
    scanf("%s",&c);
}while(c=='y'||c=='Y');
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
void delete_spec()
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

