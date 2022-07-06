/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int power(int x,int y);
int main()
{
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
int m,n,result;
printf("\n\n\n Enter the base intger:");
scanf("%d",&m);
printf("\n Enter the power to be raised to:");
scanf("%d",&n);
printf("\n\n %d raised to the power %d = %d",m,n,power(m,n));
return 0;
}
int power(int m,int n)
{
int result=1;
for(int a=0;a<n;a++)
{result*=m;}
return(result);
}

