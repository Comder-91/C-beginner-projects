#include <stdio.h>
int B_search(int arr[],int l,int u,int key)
{
    while(l<=u)
    {
        int mid=(l+u)/2;
        if(arr[mid]==key)
            return mid;
        else if(key<arr[mid])
            l=mid+1;
        else
            u=mid-1;
    }
    if(l>u)
        return -1;
}
int Quick_sort(int arr[],int l,int u)
{
    int pivot=arr[(l+u)/2],i=l,j=u;
    while(i<=j)
    {
        while(arr[i]>pivot)
            i++;
        while(arr[j]<pivot)
            j--;
        if(i<=j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }

    if(l<j)
        Quick_sort(arr,l,j);
    if(i<u)
        Quick_sort(arr,i,u);
}
int main()
{
    printf("Elements of array: ");
    int arr[100];
    char temp=getchar();
    int i=0,d=0,sign=1,length=0;
    while(temp!='\n')
    {
        if(temp=='-')
            sign*=-1;
        else if(temp=='0'||temp=='1'||temp=='2'||temp=='3'||temp=='4'||temp=='5'||temp=='6'||temp=='7'||temp=='8'||temp=='9')
            d=(d*10)+(temp-48);
        else if(temp==' ')
        {
            arr[i]=d*sign;
            i++;
            d=0;
            sign=1;
            length++;
        }
        temp=getchar();
    }
    arr[i]=d*sign;
    Quick_sort(arr,0,length);
    printf("Array after sorting:");
    for(int a=0;a<=length;a++)
        printf(" %d",arr[a]);
    int key;
    printf("\nEnter the search element: ");
    scanf("%d",&key);
    printf("Index of the search element: %d",B_search(arr,0,length,key));
    return 0;
}
