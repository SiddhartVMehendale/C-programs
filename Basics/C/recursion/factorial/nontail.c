#include<stdio.h>
int fact(int);

int main()
{
    int n;
    printf("\n Enter the term: ");
    scanf("%d",&n);
    n = fact(n);
    printf("\nThe factorial of the given number is: %d", n);
}

int fact(int n)
{
    if( n == 1 )
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}