#include<stdio.h>
int main()
{
    int i = 10;
    int *ap,*(a+i) ;
    ap = a;
    printf("\n\n%p\n\n", a);
    printf("\n\n%p\n\n", ap);
    ap++;
    printf("\n\n After increment: %p\n\n", ap);
}