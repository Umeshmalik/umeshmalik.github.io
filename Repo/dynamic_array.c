#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int a;
struct node *next;
}*start=NULL;
typedef struct node NODE;
static int top=-1,lim;
void main(){
int ch;
char c;
do{
printf("1.Enter for pushing element->\n2.Enter for poping out element->\n3.Traverse stack->\n \nEnter your choice->");
scanf("%d",&ch);
switch(ch){
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    traverse();
    break;
default:
    printf("Entered wrong choice.");
}
printf("Do you want to have more operations->");
scanf("%s",&c);
}while(c=='y'||c=='Y');

}
void push(){
NODE *p,*q;
    char c;
    printf("Enter limit of stack->");
    scanf("%d",&lim);
    do{
        if(top==(lim-1))
        {
            printf("Overflow!\n");
            return;
        }
        else{
        top++;
        p=(NODE*)malloc(sizeof(NODE));
        printf("Enter value of stack %d ->",top+1);
        scanf("%d",&p->a);
        if(start==NULL){
            p->next=start;
            start=p;
        }
        else{
            q=start;
            while(q->next!=NULL)
                q=q->next;
            q->next=p;
            p->next=NULL;
        }
        printf("Do you want to continue->");
        scanf("%s",&c);}
    }while(c=='y'||c=='Y');
    return;
}
void traverse(){
NODE *p;
if(start==NULL){
    printf("Sorry! Stack Empty.\n");
}
else{
p=start;
    while(p!=NULL){
        printf("stack ->%d\n",p->a);
        p=p->next;
    }
}
}
void pop(){
NODE *p,*q;
if(start==NULL){
    printf("Sorry! stack overflowed.\n");
}
else{
        if(start->next==NULL){\
            p=start;
            start=NULL;
            top--;
            free(p);
        }
        else{
p=start;
while(p->next!=NULL){
    q=p;
    p=p->next;
}
q->next=NULL;
free(p);
top--;
        }
}
}
