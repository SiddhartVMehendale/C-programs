#include<stdio.h>
int fraud(int *,int, int *);
int result(int *,int);

int result(int cand[], int count)
{
    int i,id1 = 0, id2 = 0, id3 =0, id4 =0;

    for( i = 0; i <count ; i++ )
    {
        if(cand[i] == 1)
        {
            id1++;
        }
        if(cand[i] == 2)
        {
            id2++;
        }
        if(cand[i] == 3)
        {
            id3++;
        }
        if(cand[i] == 4)
        {
            id4++;
        }
    }
    if(id1 > id2 && id1 > id3 && id2 > id4)
    {
        printf("\n Candidate 1 wins the elections wins by %d.", id1);
        printf("\n");
    }
    else if(id2 > id1 && id2 > id3 && id2 > id4)
    {
        printf("\n Candidate 2 wins the elections by %d.", id2);
    }
    else if(id3 > id2 && id3 > id2 && id3 > id4)
    {
        printf("\n Candidate 3 wins the elections by %d.", id3);
    }
    else
    {
        printf("\n Candidate 4 wins the elections by %d.", id4);
    }
    
}

int fraud(int id[],int count, int cand[])
{
    int i,j, key;
    for( i = 0 ; i< count ; i++)
    {
        key = id[i];
        for( j = 0 ; j < count; j++)
        {
            if(j!=i)
            {
                if(key == id[j])
                {
                   printf("id %d is  fraud dicrediting vote\n", key);
                    cand[i] = 0;
                }
            }
        }
    }
}


int main()
{
    FILE *fptr = fopen("data", "r");

    int i = 0,id[100],cand[100], count = 0, key , j;
    fscanf(fptr, "%d", &i);

    while(!feof(fptr))
    {
        id[count] = i;
        fscanf(fptr, "%d", &i);
        cand[count] = i;
        fscanf(fptr, "%d", &i);
        count++;
    }
    
    fraud(id,count, cand);
    result(cand,count);

    fclose(fptr);
    return 0;
}