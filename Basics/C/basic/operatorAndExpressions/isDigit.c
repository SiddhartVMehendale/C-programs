#include<stdio.h>
int main()
{
    char c;
    c = 'a';
    printf("After calling isdigit %d \n\v", isdigit(c));

    c = '+';
    printf("after calling isdigit %d \n\v", isdigit(c));

    c = '1';
    printf("after calling isdigit %d", isdigit(c));
    
}