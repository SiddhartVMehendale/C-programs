#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>
#define NEWNODE (struct queue *)malloc(sizeof(struct queue))
#define isNull(ptr) (ptr == NULL)

struct queue
{
    int data;
    struct queue *next;
};
