#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==0 && j%3!=0)
            {
                printf(" * ");
            }
            else
            {
                printf("  ");
            }
        }
    }
    printf("\n");
    for(i=1;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==1 && j%3==0)
            {
                printf(" * ");
            }
            else
            {
                printf("  ");
            }
        }
    }
    printf("\n");
    for(i=2;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            if((i==2 && j==1) || (i==2 && j==5))
            {
                printf(" * ");
            }
            else
            {
                printf("  ");
            }
        }
    }
     printf("\n");
    for(i=3;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            if((i==3 && j==2) || (i==3 && j==4))
            {
                printf(" * ");
            }
            else
            {
                printf("  ");
            }
        }
    }
         printf("\n");
    for(i=4;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            if(i==4 && j==3)
            {
                printf(" * ");
            }
            else
            {
                printf("  ");
            }
        }
    }
    }
