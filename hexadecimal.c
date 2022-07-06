#include <stdio.h>
void hexadecimal(int n);
int main()
{int n;
printf("\n\n Enter the number:");
scanf("%d",&n);
hexadecimal(n);
return 0;
}
void hexadecimal(int n)
{
 if(n/10!=0||n%10!=0)
 {hexadecimal(n/16);
  if(n%16<10)
  printf(" %d",n%16);
  else
  printf(" %c",n%16+55);
 }
}
