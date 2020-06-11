#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
    int *prev;
    int data;
    int *next;
};
struct node *head;


void createFirst(int data)
{
    head = (struct node*)malloc(sizeof(struct node));
    head->next = NULL;
    head->prev = NULL;
    head->data = data;
}

void createNode(int data)
{
    struct node *temp = head,*temp1;
    while(temp->next!=NULL)
    {   
        temp = temp->next;
    }
    temp1 = (struct node*)malloc(sizeof(struct node));
    temp->next = temp1;
    temp1->prev = temp;
    temp1->next = NULL;
    temp1->data = data;
}

void display()
{
    struct node *temp = head;
    while(temp!=NULL)
    {
        printf("Node %d \n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int n, i, data;
    printf("\n Enter how many nodes do you want?: ");
    scanf("%d",&n);
    printf("\n Enter node: ");
    scanf("%d", &data);
    createFirst(data);
    for( i = 1 ; i<n ; i++)
    {
        printf("\n Enter node: ");
        scanf("%d", &data);
        createNode(data);
    }
    display();
}