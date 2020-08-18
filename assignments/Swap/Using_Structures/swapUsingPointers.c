#include<stdio.h>
#include<malloc.h>

struct Num
{
    int numOne;
    int numTwo;
};

void swap(struct Num **numPtr)
{
    (*numPtr)->numTwo += (*numPtr)->numOne;
    (*numPtr)->numOne = (*numPtr)->numTwo - (*numPtr)->numOne;
    (*numPtr)->numTwo = (*numPtr)->numTwo - (*numPtr)->numOne;
}

int main()
{
    struct Num *numPtr = (struct Num *)malloc(sizeof(struct Num));
    
    printf("\n Enter the first number: ");
    scanf("%d",&numPtr->numOne);

    printf("\n Enter the second number: ");
    scanf("%d",&numPtr->numTwo);

    printf("\n Numbers before swapping: \n Num One %d \n Num Two %d",numPtr->numOne, numPtr->numTwo);
    swap(&numPtr);
    printf("\n\n Numbers after swapping: \n Num One %d \n Num Two %d",numPtr->numOne, numPtr->numTwo);

}