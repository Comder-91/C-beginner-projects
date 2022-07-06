#include <stdio.h>
int main()
{
    int n,x,y,sum=0;
    printf("\n N = ");
    scanf("%d",&n);
    int matrix[n][n];
    printf("\n x = ");
    scanf("%d",&x);
    printf("\n y = ");
    scanf("%d",&y);
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
    for(int a=0;a<n;a++)
    {
        if(a<y)
        {
            for(int b=0;b<n;b++)
            {
                sum+=matrix[a][b];
            }
        }
        else if(a==y)
        {
            if(a%2==0)
            {
                for(int b=0;b<x;b++)
                {
                    sum+=matrix[a][b];
                }
            }
            else
            {
                for(int b=x;b<n;b++)
                {
                    sum+=matrix[a][b];
                }
            }
        }
    }
    printf("\n %d",sum);
    return 0;
}
