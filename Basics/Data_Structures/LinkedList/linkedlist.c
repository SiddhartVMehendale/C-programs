#include<stdio.h>
#include "linkedlist.h"

bool delete(struct node **head, int data)
{
    struct node *temp = *head;

    if(*head == NULL)
    {
        return false;
    }
    else
    {
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
            if(isNull(temp1->next))            
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
        return true;
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
        while(!isNull(temp->next))                     
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

bool search(struct node *head, int data)
{
    if(isNull(head))                                                
    {
        return false;
    }
    struct node *temp = head;
    while(!isNull(temp))                                                      
    {
        if(temp->data == data)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int count(struct node **head)
{
    struct node *temp = *head;  
    int count = 0;
    while(!isNull(temp))                                                                     
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void prepend(struct node **head, int data)
{
    if(isNull(*head))                                                                              
    {
        insert(&*head, data);
    }
    else
    {    
        struct node *temp = CREATENODE;
        temp->data = data;
        temp->next = *head;
        *head = temp;      
    }
}

void append(struct node **head, int data)
{
    if(isNull(*head))                                                                                    
    {
        insert(&*head, data);
    }
    else
    {
        insertPos(&*head, data, count(&*head));
    }
    
}


void display(struct node *head)
{
    struct node *temp = head;
    printf("\n");
    while(!isNull(temp))                                                                                             
    {
        printf("\t%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

bool insert(struct node **head, int data)
{
    struct node *temp = CREATENODE;
    if(isNull(temp))                                                                                                            
    {
        return false;
    }
    temp->next = NULL;
    temp->data = data;
    if(isNull(*head))                                                                                                   
    {
        *head = temp;
    }
    else
    {
        struct node *temp1 = *head;
        while(!isNull(temp1->next))                                                                                                              
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
    return true;
}

bool deleteLast(struct node **head)
{
    if(!isNull(*head))
    {
        delete(&*head,count(&*head));
        return true;
    }
    else
    {
        return false; 
    }    
}

bool deleteFirst(struct node **head)
{
    if(!isNull(*head))
    {
        delete(&*head,1);
        return true;
    }
    else
    {
        return false; 
    }
    
}

bool insertPos(struct node **head, int data, int pos)
{
    if(isNull(*head))
    {
        if(!insert(&*head, data))
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
    else if(pos == 1)
    {
        prepend(&*head, data);
        return true;
    }
    else
    {
        if(pos >= count(&*head))
        {
            append(&*head, data);
            return true;
        }
        else
        {
            struct node *temp = *head, *temp1 = CREATENODE;
            int i = 0;
            while(i!=pos-1)
            {
                temp = temp->next;
                i++;
            }
            temp1->next = temp->next;
            temp->next = temp1;
            temp1->data = data;
            return true;
        }
        
    }
    
}

int main()
{
    struct node *head = NULL;
    int opt,data,pos;

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
        printf("\n9] Delete Last");
        printf("\n10] Delete First");
        printf("\n11] Insert position:");
        printf("\n0] Exit:");

        printf("\nEnter the option:");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
                printf("\nEnter the data you want to insert into the linked list: ");
                scanf("%d",&data);
                if(!insert(&head,data))
                {
                    printf("\nFailed");
                }
                else
                {
                    printf("\nNode created");
                }
                
                break;
        
        case 2:
                display(head);
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
                if(!search(head,data))
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
                if(!delete(&head,data))
                {
                    printf("\nEntered  node excedes the present number of nodes. The count of nodes is %d",count(&head));
                }
                else
                {
                    
                    printf("\nNode deleted");
                }
                
                break;

        case 9:
               if(!deleteLast(&head))
                {
                    printf("\nFailed");
                }
                else
                {
                    
                    printf("\nNode deleted");
                }
                break;

        case 10:
                if(!deleteFirst(&head))
                {
                    printf("\nFailed");
                }
                else
                {
                    
                    printf("\nNode deleted");
                }
                break;

        case 11:
                printf("\nEnter the postion in which you want to insert the node: ");
                scanf("%d",&pos);
                printf("\nEnter the data you want to insert into the linked list: ");
                scanf("%d",&data);
                if(!insertPos(&head,data,pos))
                {
                    printf("\nFailed");
                }
                else
                {
                    printf("\nNode created");
                }
                break;

        case 0:
            if(!isNull(head))
            {
                struct node *temp = head;
                while(!isNull(head))                                                                     
                {
                    head = head->next;
                    free(temp);
                    temp = head;
                }
            }
            printf("\nExit\n");
            break;

        default:
                printf("\nInvalid option");
                break;
        }
    }while(opt!=0);

    return 0;
}