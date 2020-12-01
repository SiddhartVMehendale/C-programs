#include<stdio.h>
void swap(int, int);

void swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n The number after swapping are: Num1 = %d \t Num2 = %d\n", num1, num2);
}

int main()
{
    int num1, num2;

    printf("\n Enter the first number: ");
    scanf("%d",&num1);

    printf("\n Enter the second number: ");
    scanf("%d",&num2);

    printf("\n The number before swapping: Num1 = %d \t Num2 = %d", num1, num2);
    swap(num1, num2);
}