#include <stdio.h>
void Heapify(long long arr[],long long i,long long n,long long a)
{
    if(n<=(i+a)/2)
    {
        long long c;
        if(2*n+2-a>i)
            c=2*n+1-a;
        else
            c=arr[2*n+1-a]<arr[2*n+2-a]?2*n+1-a:2*n+2-a;
        if(arr[n]>arr[c]&&c<=i)
        {
            long long temp=arr[c];
            arr[c]=arr[n];
            arr[n]=temp;
            Heapify(arr,i,c,a);
        }
    }
}
void Heap_sort(long long arr[],long long n)
{
    for(long long a=0;a<n;a++)
    {
        for(long long b=((n+a)/2)-1;b>=a;b--)
        {
            Heapify(arr,n-1,b,a);
        }
    }
}
int main()
{
    int arr[12]={12,11,10,9,8,7,6,5,4,3,2,1};
    Heap_sort(arr,12);
    for(int a=0;a<12;a++)
    printf("%d ",arr[a]);
    return 0;
}
