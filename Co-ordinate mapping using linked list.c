#include<stdio.h>
#include<stdlib.h>
typedef struct node{
                    long x,y;
                    struct node *A,*B,*C,*D;
                    }node;
node *create_node()
{
    node *ptr=(node *)malloc(sizeof(node));
    ptr->A=NULL;
    ptr->B=NULL;
    ptr->C=NULL;
    ptr->D=NULL;
    return ptr;
}
short compare_1(node *arr[],long a,long b)
{
    if((arr[a]->x-arr[a]->y)<(arr[b]->x-arr[b]->y))
        return 1;
    else if((arr[a]->x-arr[a]->y)==(arr[b]->x-arr[b]->y)&&arr[a]->x<arr[b]->x)
        return 1;
    else
        return 0;
}
void Heapify_1(node *arr[],long d[],long i,long n,long a)
{
    if(n<=(i+a)/2)
    {

        long c;
        if(2*n+2-a>i)
            c=2*n+1-a;
        else
            c=compare_1(arr,d[2*n+1-a],d[2*n+2-a])?2*n+1-a:2*n+2-a;
        if(compare_1(arr,d[c],d[n])&&c<=i)
        {
            long temp=d[c];
            d[c]=d[n];
            d[n]=temp;
            Heapify_1(arr,d,i,c,a);
        }
    }
}
void sort_1(node *arr[],long d[],long n)
{
    for(long a=0;a<n;a++)
    {
        for(long b=((n+a)/2)-1;b>=a;b--)
        {
            Heapify_1(arr,d,n-1,b,a);
        }
    }
}
short compare_2(node *arr[],long a,long b)
{
    if((arr[a]->x+arr[a]->y)<(arr[b]->x+arr[b]->y))
        return 1;
    else if((arr[a]->x+arr[a]->y)==(arr[b]->x+arr[b]->y)&&arr[a]->x<arr[b]->x)
        return 1;
    else
        return 0;
}
void Heapify_2(node *arr[],long d[],long i,long n,long a)
{
    if(n<=(i+a)/2)
    {
        long c;
        if(2*n+2-a>i)
            c=2*n+1-a;
        else
            c=compare_2(arr,d[2*n+1-a],d[2*n+2-a])?2*n+1-a:2*n+2-a;
        if(compare_2(arr,d[c],d[n])&&c<=i)
        {
            long temp=d[c];
            d[c]=d[n];
            d[n]=temp;
            Heapify_2(arr,d,i,c,a);
        }
    }
}
void sort_2(node *arr[],long d[],long n)
{
    for(long a=0;a<n;a++)
    {
        for(long b=((n+a)/2)-1;b>=a;b--)
        {
            Heapify_2(arr,d,n-1,b,a);
        }
    }
}
void join_1(node *arr[],long a,long b)
{
    arr[a]->A=arr[b];
    arr[b]->D=arr[a];
}
void join_2(node *arr[],long a,long b)
{
    arr[a]->B=arr[b];
    arr[b]->C=arr[a];
}
void delete_node(node *ptr)
{
    if(ptr->A!=NULL)
        ptr->A->D=ptr->D;
    if(ptr->D!=NULL)
        ptr->D->A=ptr->A;
    if(ptr->B!=NULL)
        ptr->B->C=ptr->C;
    if(ptr->C!=NULL)
        ptr->C->B=ptr->B;
    free(ptr);
}
int main()
{
    long n,k;
    scanf("%ld %ld",&n,&k);
    char str[k];
    scanf("%s",str);
    node *arr[n];
    for(long a=0;a<n;a++)
    {
        arr[a]=create_node();
        scanf("\n%ld %ld",&arr[a]->x,&arr[a]->y);
    }
    long d1[n],d2[n];
    for(long a=0;a<n;a++)
    {
        d1[a]=a;
        d2[a]=a;
    }
    sort_1(arr,d1,n);
    sort_2(arr,d2,n);
    for(long a=0;a<n-1;a++)
    {
        if((arr[d1[a]]->x-arr[d1[a]]->y)==(arr[d1[a+1]]->x-arr[d1[a+1]]->y))
            join_1(arr,d1[a],d1[a+1]);
        if((arr[d2[a]]->x+arr[d2[a]]->y)==(arr[d2[a+1]]->x+arr[d2[a+1]]->y))
            join_2(arr,d2[a],d2[a+1]);
    }
    node *ptr=arr[0];
    for(long a=0;a<k;a++)
    {
        if(str[a]=='A'&&ptr->A!=NULL)
        {
            node *temp=ptr;
            ptr=ptr->A;
            delete_node(temp);
        }
        if(str[a]=='B'&&ptr->B!=NULL)
        {
            node *temp=ptr;
            ptr=ptr->B;
            delete_node(temp);
        }
        if(str[a]=='C'&&ptr->C!=NULL)
        {
            node *temp=ptr;
            ptr=ptr->C;
            delete_node(temp);
        }
        if(str[a]=='D'&&ptr->D!=NULL)
        {
            node *temp=ptr;
            ptr=ptr->D;
            delete_node(temp);
        }
    }
    printf("%ld %ld",ptr->x,ptr->y);
    return 0;
}
