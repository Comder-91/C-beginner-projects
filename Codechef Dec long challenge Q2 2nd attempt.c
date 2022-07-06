#include<stdio.h>
void Heapify(long arr[],long i,long n,long a)
{
    long c=arr[2*n+1-a]<arr[2*n+2-a]?2*n+1-a:2*n+2-a;
    if(arr[n]>arr[c]&&c<=i)
    {
        long temp=arr[c];
        arr[c]=arr[n];
        arr[n]=temp;
        Heapify(arr,i,c,a);
    }
}
void Heap_sort(long arr[],long n)
{
    for(long a=0;a<n;a++)
    {
        for(long b=((n+a)/2)-1;b>=a;b--)
        {
            Heapify(arr,n-1,b,a);
        }
    }
}
int main()
{
    long t;
    scanf("%ld",&t);
    for(long a=0;a<t;a++)
    {
        long n;
        scanf("\n%ld",&n);
        long arr[n],high=1,counter=1;
        for(long b=0;b<n;b++)
            scanf("%*c%ld",&arr[b]);
        Heap_sort(&arr,n);
        for(long b=1;b<n;b++)
        {
            if(arr[b]==arr[b-1])
                counter++;
            else if(arr[b]!=arr[b-1])
            {
                if(counter>high)
                    high=counter;
                counter=1;
            }
        }
        if(n==high)
            printf("0\n");
        else
        {
            if(high==1)
                printf("-1\n");
            else
                printf("%ld\n",n-high+1);
        }
    }
    return 0;
}
