/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int main()
{
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
char ans;
int a,b,i,j;
printf("\n\n\n Triangle type A-Left lowered isosceles triangle\n Triangle type B-Right raised isosceles triangle\n Triangle type C-Centered isosceles triangle\n\n Which of the above mentioned triangle would you like to print:");
scanf("%c",&ans);
if(ans=='a'||ans=='A'||ans=='b'||ans=='B'||ans=='c'||ans=='C')
{
printf("\n %c :\n\n Enter the number of rows:",ans);
scanf("%d",&i);
printf("\n");
if(ans=='a'||ans=='A')
{
 for(j=1;j<=i;j++)
 {
  for(a=1;a<=j;a++)
  {
   printf(" *");
  }
  printf("\n");
 }
}
else if(ans=='b'||ans=='B')
{
 for(j=0;j<i;j++)
 {
  for(a=1;a<=j;a++)
  {
   printf("  ");
  }
  for(b=j;b<i;b++)
  {
   printf(" *");
  }
  printf("\n");
 }
}
else if(ans=='c'||ans=='C')
{
 for(j=1;j<=i;j++)
 {
  for(a=i-j;a>=1;a--)
  {
   printf("  ");
  }
  for(b=1;b<=2*j-1;b++)
  {
   printf(" *");
  }
  printf("\n");
 }
}
}
else
{
 printf("\n\n The chosen triangle type couldn't be found.");
}
return 0;
}
