#include<stdio.h>
#include<conio.h>
#define MAX 10
static int array[20];
static int front= -1, rear =-1;
void main(){
int ch;
char c;
do{
    printf("\n\nHeading toward main menu............\n\n");
    printf("1. Insert element->\n2.Delete element->\n3. Display queue->\nEnter your choice->");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            disply();
            break;
        default:
            printf("Sorry! Entered Wrong Choice.\n");
    }
    printf("Do you want to have more operations in MAIN MENU(Y/N)->");
    scanf("%s",&c);
}while(c=='y'||c=='Y');
printf("Ending program.......");
}
void insert(){
int num;
char c;
do{
    if (front==(rear+1)%MAX){
    printf("Queue fulled.\n");
    return;
}
else{
    printf("Enter number to be inserted->");
    scanf("%d",&num);
    if(front==-1)
        front=rear=0;
    else
        rear=(rear+1)%MAX;
    array[rear]=num;
}
printf("Do you  want to insert more element(Y/N)->");
scanf("%s",&c);
}while(c=='y'||c=='Y');
}
void delete(){
int num;
char c;
do{
if(front==-1){
    printf("Queue is empty.\n");
    return ;
}
else{
    num=array[front];
    printf("Deleted element->%d\n\n",num);
    if(front==rear)
        front=rear=-1;
    else
        front=(front+1)%MAX;
}
printf("Do you want to delete more (Y/N)->");
scanf("%s",&c);
}while(c=='y'||c=='Y');
}
void disply(){
int i=front;
if(front!=-1){
   while(i!=rear){
    printf("%d\n",array[i]);
    i=(i+1)%MAX;
   }
   printf("%d\n",array[rear]);
}
else{
    printf("Queue is empty.\n");
}
}
