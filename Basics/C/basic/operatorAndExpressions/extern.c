#include<stdio.h>

extern int b = 1;

int main()
{
    printf("\v Inside Main : %d\n",b);
    ext();
    printf("\v After calling ext: %d", b);
    testArray();
    return 0;
}

void ext()
{
    b  = 2;
}

int testArray()
{
    int *a = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9};
    printf("\n\n Array timepass %d", sizeof(a));
}