#include<stdio.h>
#include<malloc.h>
#define NEWNODE (struct queue *)malloc(sizeof(struct queue))

struct queue
{
    int data;
    struct queue *next;
};

void delete(struct queue **front, struct queue **rear)
{
    struct queue *temp = *rear;
    if(*rear == NULL)
    {
        printf("\n The Queue is empty");
    }
    else
    {
        (*rear) = (*rear)->next;
        free(temp);
        if(*front == NULL)
        {
            *rear = NULL;
        }
    }
    
}

void display(struct queue **front,struct queue **rear)
{
    struct queue *temp = *rear;
    if(*rear == NULL)
    {
        printf("\n The List is empty\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("\n%d",temp->data);
            temp = temp->next;
        }
    }
}

void addq(struct queue **front, struct queue **rear, int data)
{
    struct queue *temp;
    if(*front==NULL || *rear == NULL)
    {
        temp = NEWNODE;
        temp->data = data;
        *front = temp;
        *rear = temp;
    }
    else
    {
        temp = NEWNODE;
        temp->data = data;
        (*front)->next = temp;
        (*front) = (*front)->next;
    }
    
}

int main()
{
    int opt, data;
    struct queue *front, *rear;
    front = NULL; rear = NULL;

    do
    {
        printf("\n1] Add to the Queue");
        printf("\n2] Delete forom Queue");
        printf("\n3] Display the Queue");
        printf("\n0] Exit the program");
        printf("\nEnter your options:");
        scanf("%d",&opt);
        switch (opt)
        {
            case 1:
                    printf("\nEnter the element you want to add to the queue:");
                    scanf("%d",&data);
                    addq(&front,&rear,data);
                    break;

            case 2:
                    delete(&front, &rear);
                    break;  

            case 3:
                    display(&front,&rear);
                    break;
        }
    }while(opt!=0);
}