#include<stdio.h>

void quickSort(int *, int, int);
int partition(int *, int, int);
void swap(int *, int *);
void display(int *, int);

void display(int* array, int n)
{
    int i;
    printf("\n");
    for( i = 0 ; i < n ; i++)
    {
        printf("Element [%d] : %d\n", i+1, array[i]);
    }
}

void swap(int *low, int *high)
{
    int hold = *low;
    *low = *high;
    *high = hold;
}

int partition(int* array, int low, int high)
{
    int down = low, up = high;
    int pivot = array[low];
    do
    {
        do
        {   
            
            down++;
        }while(array[down]<pivot);

        do
        {
            up--;
        }while(array[up]>pivot);
        
        if(down<up)
        {
            swap(&array[down], &array[up]);
        }
        
    }while(down < up);
    swap(&array[low], &array[up]);
    return up;
}

void quickSort(int* array, int low, int high)
{
    if(low < high)
    {
        int partIndex = partition(array, low, high);

        quickSort(array, low, partIndex);
        quickSort(array, partIndex+1,high);
    }
}

int main()
{
    int array[100], n, i;

    printf("\n Enter the number of elements you want: ");
    scanf("%d", &n);

    printf("\nEnter %d elements in the array:\n", n);
    for( i = 0 ; i <n ; i++)
    {
        scanf("%d", &array[i]);
    }
    quickSort(array, 0, n);
    display(array, n);
} // 10 16 8 12 15 6 3 9 5