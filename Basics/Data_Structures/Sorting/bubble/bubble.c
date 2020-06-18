#include<stdio.h>

void accept(int *);
void display(int *);
void bubble(int *);
int n;

void display(int *array)                                                     // Reusable function to display the array
{
    int i;
    for(i = 0 ; i < n ; i++)
    {
        printf("\n array[%d]",i);
        printf("%d", array[i]);
    }

    printf("\n");
}

void accept(int *array)                                                       // Function to initially accept the array
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

void bubble(int *array)
{
    int hold, iter, pass, number_of_passes = 0;
    int switched = 1;

    for( pass = 0 ; pass < n-1 && switched == 1 ; pass++)
    {
        switched = 0;
        for( iter = 0 ; iter < n - pass - 1 ; iter++)
        {
            if(array[iter] > array[iter+1])
            {
                switched = 1;
                hold = array[iter];
                array[iter] = array[iter+1];
                array[iter+1] = hold;
            }
        }
        number_of_passes++;
    }

    printf("\n The number of passes are: %d", number_of_passes);
}

int main()
{
    int array[100];

    accept(array);
    printf("\n Array before sorting: ");
    display(array);

    bubble(array);
    printf("\n The array after sorting\n");
    display(array);
    return 0;
}