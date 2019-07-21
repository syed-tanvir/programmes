#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

void main(){

    struct node{
    int num;
    struct node *ptr;
    };

    typedef struct node NODE;
    NODE *temp, *last=0,*head;
    int choice=1,count=0;

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

    printf("Do you want to add numbers at first? (press 1 or 0 to exit) " );
    scanf("%d",&choice);

    while(choice==1){
        temp=(NODE *)malloc(sizeof(NODE));
        printf("Enter a number: ");
        scanf("%d",&temp->num);

        temp->ptr=head;
        head=temp;

        printf("Do you want to add numbers at first? (press 1 to continue or 0 to exit) " );
        scanf("%d",&choice);
    }

    temp=head;
    count=0;
    while(temp != 0){
        printf("%d => ", temp->num);
        count++;
        temp=temp->ptr;
    }
    printf("\n");
    printf("Number of nodes: %d\n", count);

}
