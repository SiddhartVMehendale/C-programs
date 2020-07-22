#include<stdio.h>
#include "QueueUsingLinkeList.h"

bool deleteq(struct queue **front, int *data)
{
    if(isNull(*front))  
    {
        return false;
    }
    else
    {
        struct queue *temp = *front;
        *data = (*front)->data;
        *front = (*front)->next;
        free(temp);
        return true;
    }
    
}

void display(struct queue *front)
{
    struct queue *temp = front;
    while(!isNull(temp))
    {
        printf("\n%d",temp->data);
        temp = temp->next;
    }
}

bool addq(struct queue **front, int data)
{
    struct queue *temp = NEWNODE;
    if(isNull(temp))
    {
        return false;
    }
    temp->data = data;
    temp->next = NULL;
    if(isNull(*front))
    {
        *front = temp;
    }
    else
    {
        struct queue *temp1 = *front;
        while(!isNull(temp1->next)) 
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
    return true;
}

int main()
{
    int opt, data;
    struct queue *front;
    front = NULL;

    do
    {
        printf("\n1] Add to the Queue");
        printf("\n2] Delete form Queue");
        printf("\n3] Display the Queue");
        printf("\n0] Exit the program");
        printf("\nEnter your options:");
        scanf("%d",&opt);
        switch (opt)
        {
            case 1:
                    printf("\nEnter the element you want to add to the queue:");
                    scanf("%d",&data);
                    if(!addq(&front,data))
                    {
                        printf("\nFailed");
                    }
                    else
                    {
                        printf("\nAdded succesfully");
                    }
                    
                    break;

            case 2:
                    
                    if(deleteq(&front, &data) == false)
                    {
                        printf("\nError\n");
                    }
                    else
                    {
                        printf("\n%d",data);
                    }
                    break;  

            case 3:
                    display(front);
                    break;

            case 0:
                    if(!isNull(front))
                    {
                        struct queue *temp = front;
                        while(!isNull(front))
                        {
                            front = front->next;
                            free(temp);
                            temp = front;
                        }
                    }
                    printf("\nExit");
                    break;


            default:
                printf("\nInvalid operation");
                break;
        }
    }while(opt!=0);
}