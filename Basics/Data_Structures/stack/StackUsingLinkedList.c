#include<stdio.h>
#include<malloc.h>
#define NEWNODE (struct stack *)malloc(sizeof(struct stack))

struct stack
{
    int data;
    struct stack *next;
};



void push(struct stack **top,int data)
{
    struct stack *temp;
    if(*top == NULL)
    {   
        temp = NEWNODE;
        temp->data=data;
        temp->next=NULL;
        *top = temp;
    }
    else
    {
        
        temp = NEWNODE;
        temp->data = data;
        temp->next = *top;       
        *top=temp;
    }
    
}

int pop(struct stack **top)
{
    if(*top!=NULL)
    {
        struct stack *temp = *top;
        *top = temp->next;
        int data = temp->data;
        free(temp);
        return data;
    }
    else
    {
        return __INT_MAX__;
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
            push(&top,data);
            break;

        case 2:
            printf("\nPOP");
            data = pop(&top);
            if(data == __INT_MAX__)
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

