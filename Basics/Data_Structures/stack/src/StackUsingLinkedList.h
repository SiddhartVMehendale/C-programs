#include<stdbool.h>
#define NEWNODE (struct stack *)malloc(sizeof(struct stack))
#define isNull(ptr) (ptr == NULL)

struct stack
{
    int data;
    struct stack *next;
};

bool push(struct stack **, int);
bool pop(struct stack **, int *);