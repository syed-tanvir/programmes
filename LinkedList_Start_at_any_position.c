#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

void main(){

    struct node{
    int num;
    struct node *ptr;
    };

    typedef struct node NODE;
    NODE *temp, *last=0,*head,*temp2;
    int choice=1,count=0,location=0;

    while(choice==1){
    temp=(NODE *)malloc(sizeof(NODE));
    printf("Enter a number: ");
    scanf("%d",&temp->num);

    if(last == 0 ){
        last=head=temp;
    }
    else{
        last->ptr=temp;
        last=temp;
    }
    printf("Do you want to continue? (press 1 to continue or 0 to exit) " );
    scanf("%d",&choice);
    }
    last->ptr=0;

    temp=head;
    while(temp != 0){
        printf("%d => ", temp->num);
        count++;
        temp=temp->ptr;
    }
    printf("\n");
    printf("Number of nodes: %d\n", count);

    printf("Do you want to add numbers in any position (press 1 to continue or 0 to exit) " );
    scanf("%d",&choice);

    printf("Enter location\n" );
    scanf("%d",&location);

    temp=(NODE *)malloc(sizeof(NODE));
    printf("Enter a number: ");
    scanf("%d",&temp->num);
    temp2=head;

    while(location-1>0){
        location--;
        temp2=temp2->ptr;
        }

    temp->ptr =temp2->ptr;
    temp2->ptr=temp;

    temp=head;
    while(temp != 0){
        printf("%d => ", temp->num);
        temp=temp->ptr;
    }





}
