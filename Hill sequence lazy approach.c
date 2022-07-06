#include <stdio.h>
void Heapify(int arr[],int i,int n,int a)
{
    int c=arr[2*n+1-a]<arr[2*n+2-a]?2*n+1-a:2*n+2-a;
    if(arr[n]>arr[c]&&c<=i)
    {
        int temp=arr[c];
        arr[c]=arr[n];
        arr[n]=temp;
        Heapify(arr,i,c,a);
    }
}
void Heap_sort(int arr[],int n)
{
    for(int a=0;a<n;a++)
    {
        for(int b=((n+a)/2)-1;b>=a;b--)
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
        long arr[n];
        for(long b=0;b<n;b++)
            scanf("%*c%ld",&arr[b]);
        Heap_sort(arr,n);
        short flag=1;
        long number=arr[0],occ=1;
        for(long b=1;b<n;b++)
        {
            if(arr[b]==number)
                occ++;
            else
            {
                if(occ==2)
                    printf("%ld ",number);
                number=arr[b];
                occ=1;
            }
            if(occ>2)
            {
                flag=0;
                break;
            }
        }
        if(flag!=1)
            printf("-1\n");
        else
        {
            long number=arr[n-1];
            printf("%ld ",arr[n-1]);
            for(long b=n-2;b>=0;b--)
            {
                if(arr[b]!=number)
                {
                    printf("%ld ",arr[b]);
                    number=arr[b];
                }
            }
            printf("\n");
        }
    }
    return 0;
}
