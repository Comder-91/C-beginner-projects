/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int main()
{
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
printf("\n\n\n ARMSTRONG NUMBER - Armstrong number is a positive integer that is equal to the sum of cubes of its digits.");
int a,b,c,d,r,i;
printf("\n\n Enter the minimum boundary limit of the series:");
scanf("%d",&a);
printf("\n Enter the maximum boundary limit of the series:");
scanf("%d",&b);
if(a<=b)
{
 if(b>=0)
 {
  if(a>=0)
  {d=a;}
  else if(a<0)
  {d=0;printf("\n\n The negative integers before 0 are neglected.");}
  printf("\n\n The armstrong numbers are:");
  for(i=d;i<=b;i++)
  {
   int sum=0;
   c=i;
   while(c>0)
   {
    r=c%10;
    sum+=(r*r*r);
    c/=10;
   }
   if(i==sum)
   {printf(" %d ,",i);}
  }
 }
 else if(b<0)
 {printf("\n\n The armstrong numbers cannot be negative.");}
}
else if(a>b)
{printf("\n\n The boundary isn't correctly defined.");}
return 0;
}
