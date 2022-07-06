/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int binary(int n);
int ocatal(int n);
int main()
{printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
 int n;
 printf("\n\n Enter the number:");
 scanf("%d",&n);
 printf("\n The binary form of the number is: %d",binary(n));
 printf("\n\n The octal form of the number is: %d",octal(n));
 return 0;
}
int binary(int n)
{
 int result;
 if(n/2==0&&n%2==0)
 result=0;
 else
 result=(10*binary((n/2)))+(n%2);
 return(result);
}
int octal(int n)
{
 int result;
 if(n/8==0&&n%8==0)
 result=0;
 else
 result=(10*octal((n/8)))+(n%8);
 return(result);
}



