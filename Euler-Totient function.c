/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int HCF(int a,int b);
int main()
{
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
int a,b,result,n=0;
printf("\n\n\n Enter the value of n:");
scanf("%d",&a);
for(b=1;b<a;b++)
{
 if(HCF(a,b)==1)
 n++;
}
printf("\n Euler-Totient function performed upon n gives the result:%d",n);
return 0;
}
int HCF(int a,int b)
{
int c,result;
for(c=1;c<=b;c++)
{
 if(a%c==0&&b%c==0)
 result=c;
}
return(result);
}

