#include<stdio.h>

int main()
{
    int a[10],n,x,i;
    printf("\nEnter How many array elements:-");
    scanf("%d",&n);
    printf("\nEnter the array elements:-");



    for( i = 0 ; i<n ; i++ )
    {
        scanf("%d",&a[i]);
    }

    for( i = 0 ; i<n ; i++ )
    {
        printf("%d",a[i]);
    }

    x = a[0];
    for(i=1 ; i<n ; i++ )
    {
        if(a[i]>x)
        {
            x = a[i];
        }   
    }

    printf("\nThe max Element in the array is :- %d",x );
}   