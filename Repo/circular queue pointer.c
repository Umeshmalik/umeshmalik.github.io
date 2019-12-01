#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
}*start=NULL,*last=NULL;
typedef struct node NODE;
static int front=-1,rear=-1;
void main(){
int ch;
printf("1.Enter for inserting element from front->\n2.Enter for inserting Element from rear->\n3.Delete from front->\n4.Delete from rear->\n5.Enter for displaying queue->\n\nEnter your choice->");
scanf("%d",&ch);
switch(ch){
    case 1:
        insfront();
        break;
    default:
        printf("Sorry! Entered wrong choice.\n");
}
}
void insfront(){
NODE *p;
p=(NODE*)malloc(sizeof(NODE));
printf("Enter number->");
scanf("%d",&p->data);
if(front==-1 && rear==-1){
    front=rear=0;
    start=last=p;
    p->link=start;
}

}
