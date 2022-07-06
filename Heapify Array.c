#include <stdio.h>
int i=0,arr[50];
void Heapify(int n)
{
    int c=arr[2*n+1]>arr[2*n+2]?2*n+1:2*n+2;
    if(arr[n]<arr[c]&&c<=i)
    {
        int temp=arr[c];
        arr[c]=arr[n];
        arr[n]=temp;
        Heapify(c);
    }
}
int main()
{
    int k;
    char c=NULL;
    printf("\n Enter the array elements: ");
    do
    {
        scanf("%d%c",&arr[i],&c);
        i++;
    }
    while(c!='\n');
    printf("\n Enter the value of k: ");
    scanf("%d",&k);
    printf("\n k largest elements are: ");
    for(int b=0;b<k;b++)
    {
        for(int a=(i-1)/2;a>=0;a--)
        {
            Heapify(a);
        }
        printf("%d,",arr[0]);
        arr[0]=arr[i];
        i--;
    }
    return 0;
}

