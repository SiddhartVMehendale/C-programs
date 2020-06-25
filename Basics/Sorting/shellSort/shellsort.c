#include<stdio.h>
void shellSort(int *, int);
void printArray(int *, int);

void printArray(int* array, int num)
{
    int i;
    for( i = 0 ; i < num ; i++)
    {
        printf("\t%d", array[i]);
    }
    printf("\n");
    return;
}

void shellSort(int* array, int num)
{
    for( int interval = num /2 ; interval > 0 ; interval /=2)
    {
        for (int i = interval ; i < num ; i++)
        {
            
            int temp = array[i];
            int j;
            for( j = i; j >=interval && array[j-interval] > temp ; j -= interval)
            {
                array[j] = array[j-interval];
            }
            array[j] = temp;
        }
    }
}

int main()
{
    int array[100], i , num;

    printf("\n Enter the number of elements you want:");
    scanf("%d", &num);

    printf("\nEnter the array Elements:\n");
    for( i = 0 ; i < num ; i++)
    {
        scanf("%d", &array[i]);
    }

    shellSort(array, num);

    printf("\n Array after sorting: \n");
    printArray(array, num);
    return 0;
}