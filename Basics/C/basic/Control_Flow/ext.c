#include<stdio.h>
extern int n =10;
int main()
{
    int i = 0;
    
    n = 20;
    bubble();
}
void bubble()
{
    printf("%d", n);
}