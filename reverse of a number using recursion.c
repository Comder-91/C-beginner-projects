/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int digit(int a,int n);
int main()
{
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
int a,num=0,n,b=1;
printf("\n\n\n Enter the number:");
scanf("%d",&a);
int A=a;
while(A/10!=0)
{A/=10;b++;}
for(n=1;n<=b;n++)
{
 num=num*10+digit(a,n);
}
printf("\n The reverse of the number is: %d",num);
return 0;
}
int digit(int a,int n)
{
int result;
if(n==1)
result=a%10;
else
{
 a=a/10;
 result=digit(a,n-1);
}
return(result);
}
