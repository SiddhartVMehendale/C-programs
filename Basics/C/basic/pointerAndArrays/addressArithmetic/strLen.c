#include<stdio.h>

int len(char *s)
{
    char *p = s;
    while(*p != '\0')
    {
        p++;
    }
    return p - s;
}

int main()
{
    char *s = "This is just a test text!";
    printf("\n %d", len(s));
    return 0;
} 