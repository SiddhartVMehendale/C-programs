/* program to remove all the c from given string */
#include<stdio.h>
void squeze(char[], int);

void squeze(char s[], int c)
{
    int i, j;
    for( i = j = 0; s[i]!='\0' ; i++)
    {
        if(s[i]!=c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    printf("The conversion results in follows \v");
    for(i = 0 ; s[i]!='0';i++)
    {
        printf("\t %c",s[i]);
    }
}

int main()
{
    int c = 10;
    char str[] = {'1','2','10','3','10','9'};

    squeze(str, c);
    return 0;
}