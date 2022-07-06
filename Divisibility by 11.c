#include <stdio.h>
int alternatesum(int n);
int main()
{
int n;
printf("\n\n\n Enter the number:");
scanf("%d",&n);
if(alternatesum(n)==alternatesum(n/10))
printf("\n\n The number is divisible by 11.");
return 0;
}
int alternatesum(int n)
{
int result;
if(n/10!=0||n%10!=0)
result=n%10+alternatesum(n/100);
else
result=0;
return(result);
}
