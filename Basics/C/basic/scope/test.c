#include<stdio.h>
int main()
{
    fun();
    printf("\n %d", c);
    return 0;
}

int c = 10;
void fun()
{
    printf("\n %d", c);
}