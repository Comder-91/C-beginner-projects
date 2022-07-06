/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int term(int n);
int main()
{
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
int n;
printf("\n\n\n Enter the number of terms in the fibonacci series:");
scanf("%d",&n);
printf("\n");
for(int a=1;a<=n;a++)
{printf(" %d,",term(a));}
return 0;
}
int term(int n)
{
int result;
if(n==1)
result=0;
else if(n==2)
result=1;
else
result=term(n-1)+term(n-2);
return(result);
}

