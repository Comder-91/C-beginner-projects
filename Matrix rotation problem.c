#include <stdio.h>
int main()
{
    int n,k,p,q,r,s;
    printf("\n N = ");
    scanf("%d",&n);
    int matrix[n][n];
    printf("\n K = ");
    scanf("%d",&k);
    printf("\n Enter the Matrix.\n\n");
    for(int a=0;a<n;a++)
    {
        printf(" ");
        scanf("%d",&matrix[a][0]);
        for(int b=1;b<n;b++)
        {
            scanf(" %d",&matrix[a][b]);
        }
    }
    if(k%4==0)
    {
        for(int a=0;a<n;a++)
        {
            printf("\n");
            for(int b=0;b<n;b++)
            {
                printf(" %d",matrix[a][b]);
            }
        }
    }
    else if(k%4==1)
    {
        for(int a=0;a<n;a++)
        {
            printf("\n");
            for(int b=n-1;b>=0;b--)
            {
                printf(" %d",matrix[b][a]);
            }
        }
    }
    else if(k%4==2)
    {
        for(int a=n-1;a>=0;a--)
        {
            printf("\n");
            for(int b=n-1;b>=0;b--)
            {
                printf(" %d",matrix[a][b]);
            }
        }
    }
    else
    {
        for(int a=n-1;a>=0;a--)
        {
            printf("\n");
            for(int b=0;b<n;b++)
            {
                printf(" %d",matrix[b][a]);
            }
        }
    }
    return 0;
}
