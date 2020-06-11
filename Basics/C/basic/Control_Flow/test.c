#include<stdio.h>
#define MAXLONE 1000

int getline(char[], int);
int strindex(char[], char[]);

char pattern[] = "ould"

int main()
{
    char line[MAXLINE];
    int found = 0;

    while(getline(line, MAXLINE) > 0)
    {
        if(strindex(line, pattern)>=0)
        {
            printf("%s", line);
            found++;
        }
    }
}