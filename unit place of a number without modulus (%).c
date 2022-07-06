#include <stdio.h>
int main()
{
int c;
printf("enter the desirable number:");
scanf("%d",&c);
int a=c/10;
int b=c-10*a;
printf("the digit at the unit place of the given number is:%d",b);
return 0;
}
