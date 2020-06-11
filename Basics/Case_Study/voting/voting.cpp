/* 
   On a election day, voting machine writes data in the form (voter_id, Candidate_Id) to a text file. Write a program that
   reads this file as a stream and returns the top 3 candidates at any given time. If you find a voter more than once report
   this as fraud.
   */

#include<stdio.h>

int main()
{
    FILE *fptr;

    int num;

    fptr = fopen("data","r");
    while((num = getw(fptr))!= EOF)
    {
        printf("%d\n", num);
    }

    fclose(fptr);

    return 0;
}