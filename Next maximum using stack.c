#include<stdio.h>
void front_max(long long arr[],long long fmax[],long long n)
{
    long long stack[n],i=0;
    stack[0]=0;
    for(long long a=1;a<n;a++)
    {
        if(arr[a]<arr[stack[i]])
        {
            i++;
            stack[i]=a;
        }
        else
        {
            while(arr[stack[i]]<arr[a]&&i>-1)
            {
                fmax[stack[i]]=a-1;
                i--;
            }
            i++;
            stack[i]=a;
        }
    }
    while(i>-1)
    {
        fmax[stack[i]]=n-1;
        i--;
    }
}
void back_max(long long arr[],long long fmax[],long long n)
{
    long long stack[n],i=0;
    stack[0]=n-1;
    for(long long a=n-2;a>-1;a--)
    {
        if(arr[a]<arr[stack[i]])
        {
            i++;
            stack[i]=a;
        }
        else
        {
            while(arr[stack[i]]<arr[a]&&i>-1)
            {

                fmax[stack[i]]=a+1;
                i--;
            }
            i++;
            stack[i]=a;
        }
    }
    while(i>-1)
    {
        fmax[stack[i]]=0;
        i--;
    }
}
void front_min(long long arr[],long long fmax[],long long n)
{
    long long stack[n],i=0;
    stack[0]=0;
    for(long long a=1;a<n;a++)
    {
        if(arr[a]>arr[stack[i]])
        {
            i++;
            stack[i]=a;
        }
        else
        {
            while(arr[stack[i]]>arr[a]&&i>-1)
            {
                fmax[stack[i]]=a-1;
                i--;
            }
            i++;
            stack[i]=a;
        }
    }
    while(i>-1)
    {
        fmax[stack[i]]=n-1;
        i--;
    }
}
void back_min(long long arr[],long long fmax[],long long n)
{
    long long stack[n],i=0;
    stack[0]=n-1;
    for(long long a=n-2;a>-1;a--)
    {
        if(arr[a]>arr[stack[i]])
        {
            i++;
            stack[i]=a;
        }
        else
        {
            while(arr[stack[i]]>arr[a]&&i>-1)
            {
                fmax[stack[i]]=a+1;
                i--;
            }
            i++;
            stack[i]=a;
        }
    }
    while(i>-1)
    {
        fmax[stack[i]]=0;
        i--;
    }
}
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("\n%lld",&n);
        long long arr[n],fmax[n],bmax[n],fmin[n],bmin[n];
        for(long long a=0;a<n;a++)
            scanf("%*c%lld",&arr[a]);
        printf("front_max:\n");
        front_max(arr,fmax,n);
        for(long long a=0;a<n;a++)
            printf("%lld ",fmax[a]);
        printf("\nback_max:\n");
        back_max(arr,bmax,n);
        for(long long a=0;a<n;a++)
            printf("%lld ",bmax[a]);
        printf("\nfront_min:\n");
        front_min(arr,fmin,n);
        for(long long a=0;a<n;a++)
            printf("%lld ",fmin[a]);
        printf("\nback_min:\n");
        back_min(arr,bmin,n);
        for(long long a=0;a<n;a++)
            printf("%lld ",bmin[a]);
    }
    return 0;
}
