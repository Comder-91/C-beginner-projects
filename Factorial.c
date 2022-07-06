/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int factorial(int n);
int main()
{
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
int n;
printf("\n\n\n Enter the value of n:");
scanf("%d",&n);
printf("\n The factorial of n is: %d",factorial(n));
return 0;
}
int factorial(int n)
{
int result;
if(n==0)
result=1;
else
result=n*factorial(n-1);
return(result);
}

