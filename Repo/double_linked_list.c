#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
struct node *pre;
int data;
struct node *next;
}*start=NULL,*last=NULL;
typedef struct node NODE;
static int count=0;
void main(){
int d,loc;
char c;
do{
printf("Enter your choice->\n1.Insert from last->\n2.Insert from starting->\n3.insert at specific location->\n4.Delete from start->\n5.Delete from last->\n6.Delete from specific location->\n7.Search element->\n8.Traverse the list->\n");
scanf("%d",&d);
switch(d){
case 1:
    insert_last();
    break;
case 2:
    insert_first();
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
    printf("enter wrong choice.\n");
}
fflush(stdin);
printf("Do you want to perform more operations(Y/N)->");
scanf("%s",&c);
}while(c=='y'||c=='Y');
}
void traverse(){
NODE *temp;
temp=start;
printf("total elements in list->%d\n",count);
while(temp!=NULL){
printf("elements->%d\n",temp->data);
temp=temp->next;
}
}
int insert_last(){
char c;
NODE *p,*q;
do{
p=(NODE*)malloc(sizeof(NODE));
printf("Enter element->");
scanf("%d",&p->data);
if(start==NULL){
    start=last=p;
    p->pre=p->next=NULL;
    count++;
}
else{
    q=start;
    while(q->next!=NULL){
        q=q->next;
    }
    q->next=p;
    p->pre=q;
    p->next=NULL;
    last=p;
    count++;
}
fflush(stdin);
printf("do you want to enter more(Y/N)->");
scanf("%s",&c);
}while(c=='y'|c=='Y');
}
int insert_first(){
NODE *p,*q;
char c;
do{
    p=(NODE*)malloc(sizeof(NODE));
    printf("Enter element->");
    scanf("%d",&p->data);
    if(start==NULL){
        start=p;
        p->next=p->pre=NULL;
        count++;
        last=p;
    }
    else{
        q=start;
        p->next=start;
        q->pre=p;
        start=p;
        p->pre=NULL;
        count++;
    }
    fflush(stdin);
    printf("Do you want to add more elements(Y/N)->");
    scanf("%s",&c);
}while(c=='y'||c=='Y');
}
insert_spec(){
NODE *p,*q,*r;
int loc,i;
printf("Enter location number->");
scanf("%d",&loc);
 p=(NODE*)malloc(sizeof(NODE));
    printf("Enter data->");
    scanf("%d",&p->data);
if(loc==1){
    start->pre=p;
    p->next=start;
    p->pre=NULL;
    start=p;
    count++;
}
else if(loc>1&&loc<=count){
    q=start;
    for(i=2;i<loc;i++){
            q=q->next;
            }
    r=q->next;
    p->next=q->next;
    p->pre=q;
    q->next=p;
    r->pre=p;
    count++;
    }
else if(loc==count+1){
    last->next=p;
    p->pre=last;
    p->next=NULL;
    last=p;
    count++;
}
else {
    printf("Entered location too exceeded!\n");
}
fflush(stdin);
}
int delete_start(){
NODE *p,*q;
char c;
do{
if(count==0){
    printf("list is empty.\n");
}
else if (count==1){
    start=NULL;
    last==NULL;
    count--;
}
else{
    p=start;
    q=p->next;
    q->pre=NULL;
    start=q;
    count--;
}
fflush(stdin);
free(p);
printf("Do you want to delete more elements(Y/N)->");
scanf("%s",&c);
}while(c=='y'||c=='Y');
}
delete_last(){
NODE *p,*q;
char c;
do{
        if(count==0){
            printf("list is empty.\n");
        }
        else if(count==1){
            start=NULL;
            last=NULL;
            count--;
        }
        else{
            p=last;
            last=p->pre;
            q=p->pre;
            q->next=NULL;
            count--;
        }
        fflush(stdin);
        free(p);
        printf("Do you want to delete more elements(Y/N)->");
        scanf("%s",&c);
        }while(c=='y'||c=='Y');
}
int delete_spec(){
NODE *q,*p,*r;
char c;
int loc,i=1;
if(count==0){
        printf("list is empty.\n");
}
else{
printf("Enter location->");
scanf("%d",&loc);
if(loc<=count){
do{
    if(count==1 && loc==1){
        start=NULL;
        last=NULL;
        count--;
        free(p);
    }
    else if(loc==1 && count>loc){
        p=start;
        q=p->next;
        q->pre=NULL;
        start=q;
        free(p);
        }
    else if (loc==count){
        p=last;
        q=p->pre;
        last=q;
        q->next=NULL;
        count--;
        free(p);
    }
    else{
        p=start;
        while(i!=loc){
                p=p->next;
                i++;
        }
        q=p->next;
        r=p->pre;
        r->next=p->next;
        q->pre=p->pre;
        --count;
        free(p);
    }
    fflush(stdin);
    printf("do you want to delete more(Y/N)->");
    scanf("%s",&c);
}while(c=='y'||c=='Y');
}
else{
    printf("Location is more than list count.\n");
}
}
}
int search(){
int item,i=0,j=0;
NODE *p;
printf("Enter element to search->");
scanf("%d",&item);
p=start;
while(p!=NULL){
    if(p->data==item){
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
