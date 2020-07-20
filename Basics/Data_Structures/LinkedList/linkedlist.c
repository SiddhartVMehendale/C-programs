/* Insert, delete, append, prepend, count, print */
#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#define NEWNODE (struct node *)malloc(sizeof(struct node))


struct node
{
    int data;
    struct node *next;
};

void insert(struct node **, int);
void display(struct node **);
void append(struct node **, int);
void prepend(struct node **, int);
int count(struct node **);
bool search(struct node **, int);
void sort(struct node **);
void delete(struct node **, int);

void delete(struct node **head, int data)
{
    struct node *temp = *head;
    if(data == 1)
    {
        *head = (*head)->next;
        free(temp);
    }
    else
    {
        int count = 1;
        while(count!=data-1)
        {
            temp= temp->next;
            count++;
        }
        struct node *temp1 = temp->next;
        if(temp1->next==NULL)
        {
            temp->next = NULL;
            free(temp1);
        }
        else
        {
            temp->next = temp1->next;
            free(temp1);
        }
        
    }
       
}

void sort(struct node **head)
{
    struct node *temp;
    int cnt = count(&*head);
    int i = 0, aux;

    while(i!=cnt)
    {
        temp = *head;
        while(temp->next!=NULL)
        {
            if(temp->data > temp->next->data)
            {
                aux = temp->data;
                temp->data = temp->next->data;
                temp->next->data = aux;
            }
            temp = temp->next;
        }
        i++;
    }
}

bool search(struct node **head, int data)
{
    if(*head == NULL)
    {
        return false;
    }
    else
    {
        struct node *temp = *head;
        while(temp!=NULL)
        {
            if(temp->data == data)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    
}

int count(struct node **head)
{
    struct node *temp = *head;  
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void prepend(struct node **head, int data)
{
    if(*head==NULL)
    {
        insert(&*head, data);
    }
    else
    {    
        struct node *temp = NEWNODE;
        temp->data = data;
        temp->next = *head;
        *head = temp;      
    }
}

void append(struct node **head, int data)
{
    if(*head == NULL)
    {
        insert(&*head, data);
    }
    else
    {
        struct node *temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NEWNODE;
        temp = temp->next;
        temp->next = NULL;
        temp->data= data;
    }
    
}


void display(struct node **head)
{
    struct node *temp = *head;
    printf("\n");
    while(temp!= NULL)
    {
        printf("\t%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert(struct node **head, int data)
{
    struct node *temp = NEWNODE;
    temp->next = NULL;
    temp->data = data;
    if(*head == NULL)
    {
        *head = temp;
    }
    else
    {
        struct node *temp1 = *head;
        while(temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
    
}

int main()
{
    struct node *head = NULL;
    int opt,data;

    do
    {
        printf("\n1] Insert:");
        printf("\n2] Display:");
        printf("\n3] Append:");
        printf("\n4] Prepend:");
        printf("\n5] Count nodes:");
        printf("\n6] Search:");
        printf("\n7] Sort");
        printf("\n8] Delete");
        printf("\n0] Exit:");

        printf("\nEnter the option:");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
                printf("\nEnter the data you want to insert into the linked list: ");
                scanf("%d",&data);
                insert(&head,data);
                break;
        
        case 2:
                display(&head);
                break;

        case 3:
                printf("\n Enter the node which you want to append to the linked list: ");
                scanf("%d",&data);
                append(&head, data);
                break;

        case 4:
                printf("\n Enter the node which you want to prepend:");
                scanf("%d",&data);
                prepend(&head, data);
                break;

        case 5:
                printf("\nNumber of nodes are: %d",count(&head));
                break; 

        case 6:
                printf("\n Enter the data which you want to search: ");
                scanf("%d",&data);
                if(!search(&head,data))
                {
                    printf("\n Not found");
                }
                else
                {
                    printf("\n Found");
                }
                break;

        case 7:
                sort(&head);
                break;

        case 8:
                printf("\nEnter the number of the node you want to delete: ");
                scanf("%d",&data);
                if(data>count(&head))
                {
                    printf("\nEntered  node excedes the present number of nodes. The count of nodes is %d",count(&head));
                }
                else
                {
                    delete(&head,data);
                    printf("\nNode deleted");
                }
                
                break;

        case 0:
            printf("\nExit");
            break;
        }
    }while(opt!=0);

    return 0;
}