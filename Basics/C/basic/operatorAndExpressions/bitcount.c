#include<stdio.h>
void bitcount(unsigned);

void bitcount(unsigned x)
{
    int b;

    for(b = 0 ; x != 0 ; x>>=1)
    {
        if( x & 01)
        {
            b++;
        }
    }
    printf("%1d",b);
}

int main()
{
    int n = 200;
    bitcount(n);
}