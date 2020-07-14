#include<stdio.h>
#include<malloc.h>
#define NEWNODE (struct queue *)malloc(sizeof(struct queue))

struct queue
{
    int data;
    struct queue *next;
};

int delete(struct queue **front)
{
    if(*front==NULL)
    {
        return 0;
    }
    else
    {
        struct queue *temp = *front;
        int data = (*front)->data;
        *front = (*front)->next;
        free(temp);
        return data;
    }
    
}

void display(struct queue **front)
{
    struct queue *temp = *front;
    while(temp!=NULL)
    {
        printf("\n%d",temp->data);
        temp = temp->next;
    }
}

void addq(struct queue **front, int data)
{
    struct queue *temp = NEWNODE;
    temp->data = data;
    temp->next = NULL;
    if(*front==NULL)
    {
        *front = temp;
    }
    else
    {
        struct queue *temp1 = *front;
        while(temp1->next!=NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
    
}

int main()
{
    int opt, data;
    struct queue *front;
    front = NULL;

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
                    addq(&front,data);
                    break;

            case 2:
                    data = delete(&front);
                    if(data == 0){
                        printf("\nError\n");
                    }else{
                        printf("\n%d",data);
                    }
                    break;  

            case 3:
                    display(&front);
                    break;
        }
    }while(opt!=0);
}