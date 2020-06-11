#include<stdio.h>

int main()
{
    int a[5][5],b[5][5],i,j,k,n;

    printf("\nEnter how many Elements->");
    scanf("%d",&n);
    printf("\nEnter the First Array Elements->");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter the Second Array Elements->");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe First array Elements are->\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
        }
            printf("\n");
    }
    printf("\nThe Second array elements are->\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
            
        }
        printf("\n");
    }


}