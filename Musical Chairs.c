#include <stdio.h>
int main()
{
int n,m,k;
printf("\n Enter the value of N : ");
scanf("%d",&n);
printf("\n Enter the value of M : ");
scanf("%d",&m);
printf("\n Enter the value of K : ");
scanf("%d",&k);
int arr[n+1];
printf("\n Assigned Roll Numbers :");
for(int t=0;t<n;t++)
{printf("%d ",t+1);
arr[t]=t+1;}
int b=n;
for(int a=0;a<k;a++)
{for(int t=b;t>=1;t--)
{arr[t]=arr[t-1];}
arr[0]=arr[b];
}
for(int x=m;x>1;x--)
{int b=x;
for(int a=0;a<k;a++)
{for(int t=b;t>=1;t--)
{arr[t]=arr[t-1];}
arr[0]=arr[b];
}}
printf("\n\n Winner Roll Number : %d",arr[0]);
return 0;
}
