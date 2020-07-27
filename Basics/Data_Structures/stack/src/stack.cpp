// Stack demonstration in C
#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 100

struct stack{
    int top;
    int items[STACKSIZE];
};

void push(struct stack *ps, int x)
{
    if(ps->top == STACKSIZE-1)
    {
        printf("\n%s","Stack overflow");
        exit(1);
    }
    else
    {
        ps->items[++(ps->top)] = x;
    }
    
}

int empty(struct stack *ps)
{
    if(ps->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int pop(struct stack *ps)
{
    if(empty(ps) == 1)
    {
        printf("%s","Stack underflow");
        exit(0);
    }
    else
    {
        return (ps->items[ps->top--]);
    }
    
}

int main()
{
    struct stack *stack1 = (struct stack*)malloc(sizeof(struct stack));
    // Code to push elemnts in stack
    push(stack1, 10);
    push(stack1, 20);
    push(stack1, 30);
    push(stack1, 40);
    push(stack1, 50);

    // Code to pop the elements
    printf("\n\nPop :%d",pop(stack1));
    printf("\n");

    printf("\n\nPop :%d",pop(stack1));
    printf("\n");
    printf("\n\nPop :%d",pop(stack1));
    printf("\n");
    printf("\n\nPop :%d",pop(stack1));
    printf("\n");
    printf("\n\nPop :%d",pop(stack1));
    printf("\n");
    printf("\n\nPop :%d",pop(stack1));
    printf("\n");
    printf("\n\nPop :%d",pop(stack1));
    printf("\n");
    return 0;
}