#include<stdio.h>
#include<conio.h>
#define MAX 10
int array[MAX];
int front=-1 ,rear=-1,m=0;
void main(){
int ch;
char c;
do{
printf("------Heading toward Main Menu--------\n\n\n1.Enter for inserting from front->\n2.Enter for inserting from rear->\n3.Enter for deleting from front->\n4.Enter for deleting from rear->\n5.Enter for displaying queue->\n\n Enter your choice->");
scanf("%d",&ch);
switch(ch){
    case 1:
        insfor();
        break;
    case 2:
        insrear();
        break;
    case 3:
        delfor();
        break;
    case 4:
        delrear();
        break;
    case 5:
        display();
        break;
    default:
        printf("Sorry! Entered wrong choice.\n");
}
printf("Do you want to have more operations to MAIN MENU(Y/N)->");
scanf("%s",&c);
}while(c=='y'||c=='Y');
printf("Ending program.....");
getch();
return;
}
insfor(){
    int num,i;
    char c;
    do{
        if(m!=MAX){
        printf("Enter number->");
        scanf("%d",&num);
        if(front==-1 && rear==-1){
        front=rear=0;
        array[front]=num;
        m++;
    }
    else if(front==0 && rear < MAX-1){
        for(i=rear; i>=front;i--){
            array[i+1]=array[i];
        }
        array[front]=num;
        rear++;
        m++;
    }
    else if(front>0){
        front--;
        array[front]=num;
        m++;
    }
}
else{
    printf("Sorry! Queue is fulled.\n");
    return;
}
printf("Do you want to insert more(Y/N)->");
scanf("%s",&c);
}while(c=='y'||c=='Y');
}
void insrear(){
int num,i;
char c;
do{
if(rear!=MAX-1){
    printf("Enter number to insert->");
    scanf("%d",&num);
  if(front==-1 && rear== -1){
     front=rear=0;
     array[front]=num;
     m++;
    }
    else if(rear<MAX-1){
        rear++;
        m++;
        array[rear]=num;
    }
    else if(front!=0 && rear==MAX-1){
        for(i=front;i<=rear;i++){
            array[i-1]=array[i];
        }
    m++;
    array[rear]=num;
    }
    }
else{
    printf("Sorry! Queue is full.\n");
    return;
}
printf("Do you want to add more(Y/N)->");
scanf("%s",&c);
}while(c=='y'||c=='Y');
}
void delfor(){
int num;
char c;
do{
if(front==rear&& front!=-1){
    num=array[front];
    front=rear=-1;
    printf("Number deleted->%d\n",num);
}
else if(front==-1 && rear == -1)
    {
    printf("Sorry! Queue is empty.\n");
    return;
}
else{
    num=array[front];
    front++;
    printf("Number deleted->%d\n",num);
}
printf("Do you want to delete more element(Y/n)->");
scanf("%s",&c);
}while(c=='y'||c=='Y');
}
void delrear(){
int num;
char c;
do{
if(front==-1 && rear ==-1){
    printf("Sorry! Queue is empty.\n");
    return;
}
else if(front==rear && rear!=-1){
    num=array[front];
    front=rear=-1;
    printf("Number deleted->%d\n",num);
}
else{
    num=array[rear];
    rear--;
    printf("Number deleted ->%d\n",num);
}
printf("Do you want to delete more element(Y/N)->");
scanf("%s",&c);
}while(c=='y'||c=='Y');
}
void display(){
int i;
if(front !=-1 && rear !=-1){
for(i=front;i<=rear;i++){
    printf("%d\n",array[i]);
}
}
else{
    printf("Sorry! Queue is Empty.\n");
}
}
