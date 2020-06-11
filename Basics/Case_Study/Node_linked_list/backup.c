/* 
    Given a linkedlist, remove all consicutive nodes that sum to zero. Print out the remaining nodes. 

    For example, suppose you are given the input 3-> 4-> -7 -> 5 -> 6 -> -6. In this case, you should first remove
    3-> 4-> -7 and then 6-> -6 leavning only five.
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
    int *next;
    int data;
    int *prev;
};
struct node *head;

int count = 0;

void createFirst(int data)
{
    head = (struct node*)malloc(sizeof(struct node));
    head->next = NULL;
    head->prev = NULL;
    head->data = data;
    count++;
}

void createNode(int data)
{
    struct node *temp = head,*temp1;
    while(temp->next!=NULL)
    {   
        temp = temp->next;
    }
    temp1 = (struct node*)malloc(sizeof(struct node));
    temp->next = temp1;
    temp1->prev = temp;
    temp1->next = NULL;
    temp1->data = data;
    count++;
}



void display()
{
    struct node *temp = head;
    while(temp!=NULL)
    {
        printf("Node %d \n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int i = 1,cnt = 1, num;
    while(i != 0)
    {
        printf("\n 1 -> Enter the number ");
        printf("\n 2 -> Remove the sequence ");
        printf("\n 3 -> Print all the nodes");
        printf("\n 0 -> Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&i);
        switch(i){
            case 1:
                    if(cnt == 1)
                    {
                        printf("\n Enter the number: ");
                        scanf("%d", &num);
                        createFirst(num);
                        cnt++;
                    }
                    else
                    {
                        printf("\n Enter the number: ");
                        scanf("%d", &num);
                        createNode(num);
                    }
                    break;

            case 2:
                    //sequence();
                    break;

            case 3:
                    printf("\n The count of the nodes are: %d\n", count);
                    display();
                    break;

            case 0:
                    printf("Exit\n\n");
                    return 0;
        }
    }
}