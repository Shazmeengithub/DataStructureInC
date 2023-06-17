//doubt+
#include <stdio.h>
#include <stdlib.h>
struct node *create(int);
void display(struct node*);

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{
    int n;
    struct node *rear;
    printf("Enter the number of nodes ");
    scanf("%d",&n);
    rear=create(n);
    display(rear);
    return 0;
}

struct node *create(int n)
{
    int i;
    struct node *rear,*temp;
    rear=malloc(sizeof(struct node));
    printf("Enter the data for node 1 : ");
    scanf("%d",&(rear->data));
    rear->prev=rear->next=rear;

    for(i=2;i<=n;i++)
    {
        temp=malloc(sizeof(struct node));
        printf("Enter the data for node %d : ",i);
        scanf("%d",&temp->data);
        temp->next=rear->next;
        rear->next=temp;
        temp->prev=rear;
    }
    return (rear);
}

void display(struct node *rear)
{
    struct node *temp;
    temp=rear->next;

    printf("---Data Stored in the Linked List---");
    do
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }while(temp!=rear->next);
}



