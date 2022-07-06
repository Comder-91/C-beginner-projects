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
        printf("%ld\n",n+1>2*pow(log(n))-pow(log(n/2))?n-pow(log(n))+1:pow(log(n))-pow(log(n/2)));
    }
    return 0;
}
