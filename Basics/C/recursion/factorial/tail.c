code#include<stdio.h>

int fact (int, int);

int main()
{
    int no;
    printf("\n Enter the number: ");
    scanf("%d", &no);
    printf("\n %d", fact(no, 1));
}

int fact(int no, int ans)
{
    if(no == 1)
    {
        return ans;
    }
    else
    {
        return fact(no-1, ans*no);
    }
}