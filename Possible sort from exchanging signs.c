#include<stdio.h>
int main()
{
    long t;
    scanf("%ld",&t);
    while(t--)
    {
        long n;
        scanf("\n%ld",&n);
        long arr[n],f=0,m=0;
        for(long a=0;a<n;a++)
        {
            scanf("%*c%ld",&arr[a]);
            if(arr[a]<0)
            {
                arr[a]=-arr[a];
                m++;
            }
        }
        for(long a=1;a<n;a++)
        {
            if(arr[a]>=arr[a-1]&&f==0)
            {
                f=1;
                if(m!=a&&m!=a-1)
                {
                    f=-1;
                    break;
                }
            }
            if(arr[a]<=arr[a-1]&&f==1)
            {
                f=-1;
                break;
            }
        }
        if(f==-1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
