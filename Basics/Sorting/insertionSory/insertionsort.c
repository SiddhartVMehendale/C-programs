#include<stdio.h>
void insertionSort(int *, int);
void display(int *, int);

void display(int* array, int num)
{
    int i = 0;
    printf("\n");
    for(i = 0 ; i < num ; i++)
    {
        printf("\t%d", array[i]);
    }
}

void insertionSort(int* array, int n)
{
    int i, k, y;

    for( k = 1; k < n ; k++)
    {
        y = array[k];

        for( i = k-1; i>=0 && y < array[i]; i--)
        {
            array[i+1] = array[i];
        }
        array[i+1] = y;
    }
}

int main()
{
    int array[100], i, num;
    
    printf("Enter the number of array elements you want:");
    scanf("%d", &num);

    printf("\n Enter %d array elements- ", num);
    for( i = 0 ; i < num ; i++)
    {
        printf(" \nElement [%d]: ", i+1);
        scanf("%d",& array[i]);
    }
    insertionSort(array, num);
    display(array, num);
}
