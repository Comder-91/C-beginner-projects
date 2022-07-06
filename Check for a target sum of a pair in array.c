#include <stdio.h>
int main()
{
int N,T,x=0,y=0;
printf("\n Enter the value of N:");
scanf("%d",&N);
printf("\n Enter the value of T:");
scanf("%d",&T);
int numbers[N];
printf("\n Enter the numbers with space in between them:");
scanf("%d",&numbers[0]);
for(int a=1;a<N;a++)
{
scanf(" %d",&numbers[a]);
}
for(int a=0;a<N;a++)
{
for(int b=a+1;b<N;b++)
{
if(numbers[a]+numbers[b]==T)
{x=a;y=b;break;}}}
if(x==0&&y==0)
printf("-1");
else
printf("\n %d %d",x,y);
return 0;
}
