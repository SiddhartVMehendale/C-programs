/*  Write a program to check wether a integer is palindrome or not example 121 is a palindrome but 678 is not. 
    do not convert the number in a string*/
    
#include<stdio.h>


int count(int num)
{
    int cn = 0;                                            // Initialize count
    while(num != 0)                                        // Till the numbers is 0
    {   
        num /= 10;                                         // Diviging by 10 to get to the last pos
        cn++;                                              // To maintain a count of the position
    }

    return cn;
}

int seperate(int num)                                     // To get the number of zeros * 10 to retrive the necessary position
{
    int tens = 10, i;
    for(i = 1 ; i<num-1 ; i++)
    {
        tens *= 10;
    }
    return tens;
}

int list(int tens, int digit, int no)
{
    int arr[100],temp[100], i = 0, j = 0, flag = 1;
    for(i = 0 ; i < no ; i++)
    {
        arr[i] = digit/tens;
        digit = digit % tens;
        tens = tens / 10;
        
    }    
    for ( i = no-1 ; i >= 0 ; i--)
    {
        
        temp[j] = arr[i];
        j++;
    }

    for(i = 0 ; i < no ; i++)
    {
        if(arr[i] != temp[i])
        {
            flag = 0;
        }
    }
    return flag;
}

int main()
{
    int num, no_of_digits, tens, flag;
    printf("\n Enter the number: " );               
    scanf("%d",&num);                                       // To accept the number
    
    no_of_digits = count(num);                              // To get the no of digits
    tens = seperate(no_of_digits);                          // to get the tens position

    flag = list(tens, num, no_of_digits);                               // To get the digits seperated
    if(flag == 1)
    {
        printf("\n The given number is palindrome");
    }
    else
    {
        printf("The given number is not a palindrome");
    }
    

}