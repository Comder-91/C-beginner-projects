#include<stdio.h>
int main()
{
    long t;
    scanf("%ld",&t);
    while(t--)
    {
        long n,ans=0,one=-1;
        scanf("\n%ld",&n);
        short arr[n];
        for(long a=0;a<n;a++)
        {
            long temp;
            scanf("%*c%ld",&temp);
            arr[a]=temp%2;
        }
        for(long a=0;a<n;a++)
        {
            if(arr[a]==1)
            {
                one=a;
                break;
            }
        }
        if(one==-1)
            printf("-1\n");
        else
        {
            long x=0,y=0;
            for(long a=0;a<n;a++)
            {
                if(arr[a]==a%2)
                    x++;
                else
                    y++;
            }
            if(x>=y)
            {
                printf("%ld\n",y);
                for(long a=0;a<n;a++)
                {
                    if(arr[a]==1&&arr[a]==a%2)
                    {
                        one=a;
                        break;
                    }
                }
                for(long a=0;a<n;a++)
                {
                    if(arr[a]!=a%2&&a!=one)
                            printf("%ld %ld\n",a+1,one+1);
                }
            }
            else
            {
                printf("%ld\n",x);
                for(long a=0;a<n;a++)
                {
                    if(arr[a]!=1&&arr[a]==a%2)
                    {
                        one=a;
                        break;
                    }
                }
                for(long a=0;a<n;a++)
                {
                    if(arr[a]==a%2&a!=one)
                            printf("%ld %ld\n",a+1,one+1);
                }
            }
        }
    }
    return 0;
}
