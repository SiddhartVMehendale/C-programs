#include<stdio.h>
int main()
{
    int a = 10;
    printf("\n\n %d \n\n", &a);
    int ptr = &a;
    printf("\n\n%d \n\n", ptr);
}