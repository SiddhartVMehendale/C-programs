#include<stdio.h>
int main()
{
    char c = 'b';
    fun(c);
    return 0;
}

void fun(int c)
{
    printf("%d", c);
}