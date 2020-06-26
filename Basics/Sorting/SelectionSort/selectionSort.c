#include<stdio.h>
void selectionSort(int *, int);
void display(int *, int);

void display(int* array, int num)
{
    int i;
    for( i = 0 ; i < num ; i++)
    {
        printf("\t %d", array[i]);
    }
}

void selectionSort(int* array, int num)
{
    int i, index, j, large;

    for(i = num-1 ; i>0; i--)
    {
        large = array[0];
        index = 0;
        
        for(j = 1 ; j <= i; j++)
        {
            if(array[j] > large)
            {
                large = array[j];
                index = j;
            }
        }
        array[index] = array[i];
        array[i] = large;
    }
}

int main()
{
    int array[20], i, num;

    printf("\nEnter the number of array elements: ");
    scanf("%d", &num);

    printf("\n Enter the array elements");
    
    for(i = 0 ; i < num ; i++)
    {
        scanf("%d", &array[i]);
    }

    selectionSort(array, num);
    
    printf("\n Array after sorting: ");
    display(array, num);
}