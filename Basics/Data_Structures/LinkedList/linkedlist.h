#include<malloc.h>
#include<stdbool.h>
#define CREATENODE (struct node *)malloc(sizeof(struct node))
#define isNull(ptr) (ptr == NULL)

struct node
{
    int data;
    struct node *next;
};

bool delete(struct node **, int);
bool insert(struct node **, int);
void display(struct node *);
void append(struct node **, int);
void prepend(struct node **, int);
int count(struct node **);
bool search(struct node *, int);
void sort(struct node **);
bool deleteLast(struct node **);
bool deleteFirst(struct node **);
bool insertPos(struct node **, int, int);