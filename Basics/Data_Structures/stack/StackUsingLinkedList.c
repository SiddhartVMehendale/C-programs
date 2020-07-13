#include<stdio.h>
#include<malloc.h>
#define NEWNODE (struct stack *)malloc(sizeof(struct stack))

struct stack
{
    int data;
    struct stack *next;
};
struct stack *top;


void push(int data)
{
    if(top == NULL)
    {   
        top = NEWNODE;
        top->data=data;
        top->next=NULL;
    }
    else
    {
        struct stack *temp;
        temp = NEWNODE;
        temp->data = data;
        temp->next = top;       
        top=temp;
    }
    
}

void pop()
{
    if(top!=NULL)
    {
        struct stack *temp = top;
        top = top->next;
        printf("\nPoped number: %d\n",temp->data);
        free(temp);
    }
    else
    {
        printf("\nStack Under flow please push the elements in the stack or press 0 To exit the program\n");
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
            push(data);
            break;

        case 2:
            printf("\nPOP");
            pop();
            break;

        case 0:
            printf("\nEXIT");
            break;
        }
    } while (opt!=0);
    
}

