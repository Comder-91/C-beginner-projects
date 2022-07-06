#include <stdio.h>
int HCF(int x,int y)
{int a=y>x?x:y,b=y>x?y:x;
if(b%a==0)
return(a);
else
return(HCF(b%a,a));}
int main()
{printf("%d",HCF(24,18));
return 0;}
