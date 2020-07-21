#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#define NEWNODE (struct stack *)malloc(sizeof(struct stack))

struct stack
{
    int data;
    struct stack *next;
};



bool push(struct stack **top,int data)
{
    struct stack *temp;
    temp = NEWNODE;
    if(temp == NULL)
    {
        return false;
    }
    temp->data = data;
    if(*top == NULL)
    {   
        temp->next=NULL;
        *top = temp;
    }
    else
    {
        temp->next = *top;       
        *top=temp;
    }
    
}

bool pop(struct stack **top, int *data)
{
    if(*top!=NULL)
    {
        struct stack *temp = *top;
        *top = temp->next;
        *data = temp->data;
        free(temp);
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    struct stack *top;
    top = NULL;
    int opt;
    int data;
    
    do
    {
        printf("\n1]Push");
        printf("\n2]POP");
        printf("\n0]Exit");
        printf("\nEnter the options: ");
        scanf("%d",&opt);

        switch (opt)
        {
        case 1:
            printf("\nEnter the number which you want to push in the Stack:");
            scanf("%d",&data);
            if(!push(&top,data))
            {
                printf("\nError");
            }
            else
            {
                printf("\nPush succesful");
            }
            
            break;

        case 2:
            printf("\nPOP");
            if((pop(&top,&data))== false)
            {
                printf("\n Stack Underflow please push the elements in the stack");
            }else{
                printf("\n %d",data);
            }
            break;

        case 0:
            printf("\nEXIT");
            break;
        }
    } while (opt!=0);
    
}

