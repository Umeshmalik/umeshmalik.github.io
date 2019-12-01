#include<stdio.h>
#include<conio.h>
static int lim,m,s[10],top=-1;
void main(){
    char c;
    int ch;
    do{
            printf("------------------Main menu--------------------\n");
    printf("1.Enter for adding new elements->\n2.Enter for deleting top element->\n3.Enter for traversing element->\n\n Enter your choice->");
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
        printf("Sorry! Entered wrong choice.");
    }
    printf("Do you want more operations(Y/N)->");
    scanf("%s",&c);
    }while(c=='y'||c=='Y');
getch();
}
void push(){
char c;
if(m==0){
printf("Enter limit of stack->");
scanf("%d",&lim);
m++;}
do{
if(top==(lim-1)){
    printf("Sorry! stack is full(Overflowed).\n");
    return;
}
else{
        top++;
        printf("enter value of stack %d->",top+1);
        scanf("%d",&s[top]);
    }
printf("Do you want to continue operation(Y/N)->");
scanf("%s",&c);
}while(c=='y'||c=='Y');
}
void traverse(){
    int i;
    if(top==-1){
        printf("Sorry! Stack is empty.\n");
    }
    else{
    for(i=0;i<=top;i++){
        printf("stack %d-> %d\n",i+1,s[i]);
    }
    }
}
void pop(){
    if(top==-1){
        printf("Sorry! Stack underflowed.\n");
        return;
    }
    else
    top--;
}
