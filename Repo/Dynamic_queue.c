#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
typedef struct node NODE;
NODE *head=NULL;
NODE *tail=NULL;
void main(){
char c;
int sw;
do{
    printf("Heading toward main menu.......\n");
    printf("1.Enter for insertion new element in queue->\n2.Enter for deletion of element->\n3.Enter for traverse->\n\nEnter your choice->");
    scanf("%d",&sw);
    switch(sw){
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            traverse();
            break;
        default:
            printf("\n\nSorry! Entered wrong choice.\n\n");
    }
    printf("Do you want to have more operations on queue(Y/N)->");
    scanf("%s",&c);
}while(c=='y'||c=='Y');
printf("\n\n\n\t\t\t\t\tThanks for visit.\n\t\t\t\t\tHave a Good Day.");
}
void insert(){
NODE *q;
char c;
do{
    q=(NODE*)malloc(sizeof(NODE));
    printf("Enter value for queue->");
    scanf("%d",&q->data);
    if(head==NULL){
        q->next=head;
        head=tail=q;
    }
    else{
        q->next=NULL;
        tail->next=q;
        tail=q;
    }
    printf("Do you want to add more elements(Y/N)->");
    scanf("%s",&c);
}while(c=='y'||c=='Y');
}
void delete(){
NODE *q;
char c;
do{
        if(head!=NULL){
    if(head!=tail){
        q=head;
        head=head->next;
        printf("Element deleted->%d\n",q->data);
        free(q);
    }
    else{
        q=head;
        head=tail=NULL;
        printf("Element deleted->%d\n",q->data);
        free(q);
    }
    printf("Do you want to have more operations(Y/N)->");
    scanf("%s",&c);
        }
        else{
            printf("Sorry! Queue already emptied.\n");
            return;
        }
}while(c=='y'||c=='Y');
}
void traverse(){
NODE *q;
q=head;
if(head!=NULL){
    while(q!=NULL){
        printf("Element->%d\n",q->data);
        q=q->next;
            }
}
else{
    printf("Sorry! Queue is empty.\n");
    return;
}
}
