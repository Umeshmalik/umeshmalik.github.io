#include<stdio.h>
#include<conio.h>
static int array[10], head=-1, tail=-1,lim;
void main(){
    char c;
    int sw;
    do{printf("Heading toward main MENU......\n");
    printf("-----------Queue-----------\n\n");
    printf("1.Enter to add new element to queue->\n2.Enter to delete element from queue->\n3.Enter to Traverse queue->\n\nEnter your choice->");
    scanf("%d",&sw);
    switch(sw){
        case 1:
            add();
            break;
        case 2:
            delete();
            break;
        case 3:
            traverse();
            break;
        default:
            printf("Sorry! Entered wrong choice.\n");
    }
    printf("Do you want to have more operation(Proceed for main MENU)->");
    scanf("%s",&c);
    }while(c=='y'||c=='Y');
    printf(" Bye!\n Bye!\n Bye!");
    }
void add(){
    char c;
    if(lim==0){
            do{
printf("\nEnter limit of queue(This will be unchangeable & lower than 11)->");
    scanf("%d",&lim);
    }while(lim>10);
    }
    do{
            if(tail<lim-1){
        printf("Enter the data for queue element %d->",tail+2);
        scanf("%d",&array[tail+1]);
        if(tail==-1&&head==-1)
            head++;
        tail++;
        printf("Do you want to enter more(Y/N)->");
        scanf("%s",&c);}
        else{
            printf("Sorry! Queue is full.\n");
            c='n';
        }
        }while(c=='y'||c=='Y');
}
void traverse(){
    int i,m=1;
  for(i=head;i<=tail;i++){
        printf("Element %d->%d\n",m,array[i]);
        m++;
    }
}
void delete(){
int item;
char c;
do{
if(tail!=-1){
item=array[head];
if(head==tail){
    head=tail=-1;
    printf("Deleted item->%d\n\nHere you Emptied the Queue.\n\n",item);
}
else{
    printf("Deleted item->%d\n",item);
    head++;
}
printf("Do you want to delete more->");
scanf("%s",&c);}
else{c='n';
    printf("\n\nSorry! We don't have cure for silly persons.\n\n");
}
}while(c=='y'||c=='Y');
}
