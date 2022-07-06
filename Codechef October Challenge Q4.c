#include <stdio.h>
short log(long n)
{
    if(n==0||n==1)
        return 0;
    else
    return 1+log(n/2);
}
long pow(short n)
{
    if(n==0)
        return 1;
    else
        return 2*pow(n-1);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int a=0;a<t;a++)
    {
        long n;
        scanf("\n%ld",&n);
        if(n==0)
            printf("1\n");
        else
        {
            if(pow(log(n+1))!=n+1)
                n=pow(log(n));
            long ans=0;
            short a=n%2;
            while(n%2==a)
            {
                ans=2*ans+1;
                n/=2;
            }
            printf("%ld\n",ans+1);
        }
    }
    return 0;
}
