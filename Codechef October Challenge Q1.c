#include <stdio.h>
int main()
{
    short int t;
    scanf("%d",&t);
    short int arr[t];
    for(int a=0;a<t;a++)
    {
        int b,c;
        scanf("\n%d %d",&b,&c);
        if(b==0)
            arr[a]=0;
        else if(c==0)
            arr[a]=1;
        else
            arr[a]=2;
    }
    if(arr[0]==0)
        printf("Liquid");
    else if(arr[0]==1)
        printf("Solid");
    else
        printf("Solution");
    for(int a=1;a<t;a++)
    {
        if(arr[a]==0)
            printf("\nLiquid");
        else if(arr[a]==1)
            printf("\nSolid");
        else
            printf("\nSolution");
    }
    return 0;
}
