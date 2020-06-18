#include<stdio.h>

void accept(int *);
void display(int *);
int n;

void display(int *array)
{
    int i;
    for(i = 0 ; i < n ; i++)
    {
        printf("\n array[%d]",i);
        printf("%d", array[i]);
    }

    printf("\n");
}

void accept(int *array)
{
    int i;
    printf("\n How many elements do you want in the array: ");
    scanf("%d",&n);

    printf("\n Enter the %d array elements -> ",n);
    for( i = 0 ; i < n ; i++)
    {
        scanf("%d",&array[i]);
    }
}

int main()
{
    int array[100];

    accept(array);
    printf("\n Array before sorting: ");
    display(array);
    return 0;
}