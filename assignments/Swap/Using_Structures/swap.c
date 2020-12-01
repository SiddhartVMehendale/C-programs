#include<stdio.h>

struct Num
{
    int numOne;
    int numTwo;
};

    

int main()
{
    struct Num numObj;
    printf("\n Enter number one: ");
    scanf("%d",&numObj.numOne);

    printf("\n Enter number two: ");
    scanf("%d",&numObj.numTwo);

    printf("\n Before swap:\n Number one: %d \n Number Two: %d",numObj.numOne, numObj.numTwo);
    numObj.numTwo += numObj.numOne;
    numObj.numOne = numObj.numTwo - numObj.numOne;
    numObj.numTwo = numObj.numTwo - numObj.numOne; 

    printf("\n\n After swap:\n Number one: %d \n Number Two: %d",numObj.numOne, numObj.numTwo);
}