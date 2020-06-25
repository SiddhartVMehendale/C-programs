#include<stdio.h>
int mergeSort(int *, int, int);
int merge(int *, int, int, int);

int merge(int* array, int low, int mid, int high)
{
    int temp[20], k;
    int h = low, i = low, j = mid+1;

    while ((h <= mid) && (j <= high))
    {
        if(array[h] <= array[j])
        {
            temp[i] = array[h];
            h = h+1;
        }
        else
        {
            temp[i]  = array[j];
            j = j + 1;
        }
        i = i+1;
    }
    if(h > mid)
    {
        for( k = j; k <= high ; k++)
        {
            temp[i] = array[k];
            i++;
        }
    }
    else
    {
        for ( k = h; k <= mid; k++)
        {
            temp[i] = array[k];
            i++;
        }
    }
    for(k = low ; k <= high ; k++)
    {
        array[k] = temp[k];
    }
    return 0;
}


int mergeSort(int* array, int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high)/2;
        mergeSort(array, low, mid);
        mergeSort(array, mid+1, high);
        merge(array, low, mid, high);
    }
}

int main()
{
    int array[20], num, i;
    printf("\n Enter the number or elements you want: ");
    scanf("%d", &num);

    printf("\n Enter the elements: ");
    for( i = 0 ; i < num ; i++)
    {
        scanf("%d",&array[i]);
    }

    mergeSort(array, 0, num-1);

    printf("\n The array after sorting: ");
    for( i=0 ; i < num ; i++)
    {
        printf("\t%d", array[i]);
    }
}