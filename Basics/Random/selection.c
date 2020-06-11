#include<stdio.h>

int main()
{
    int a[10],n,i,j,temp;

    printf("\nEnter the how many elements:-");
    scanf("%d",&n);

    printf("\nEnter the array elemets :-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        for(j=1 ; j<n-i ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = a[i];
            }
        }
    }

    printf("\nThe Sorted elements are :-");
    for(i=0 ;i<n;i++)
    {
        printf("%d",a[i]);
    }
}