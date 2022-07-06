/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int main()
{
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
char ans;
int a,b,i,j;
printf("\n\n\n Which type of triangle would you like to print:");
scanf("%c",&ans);
if(ans=='a'||ans=='A'||ans=='b'||ans=='B'||ans=='c'||ans=='C'||ans=='d'||ans=='D'||ans=='e'||ans=='E'||ans=='f'||ans=='F'||ans=='g'||ans=='G'||ans=='h'||ans=='H')
{
 printf("\n %c :\n\n Enter the number of rows:",ans);
 scanf("%d",&i);
 printf("\n");
 if(ans=='a'||ans=='A'||ans=='b'||ans=='B'||ans=='c'||ans=='C'||ans=='d'||ans=='D'||ans=='g'||ans=='G'||ans=='h'||ans=='H')
 {
  if(ans=='a'||ans=='A')
  {
   for(j=1;j<=i;j++)
 {
  for(a=1;a<=j;a++)
  {
   printf(" %d",a);
  }
  printf("\n");
 }
 }
 if(ans=='b'||ans=='B')
 {
  for(j=i;j>=1;j--)
 {
  for(a=1;a<=j;a++)
  {
   printf(" %d",a);
  }
  printf("\n");
 }
 }
 if(ans=='c'||ans=='C')
 {
  for(j=1;j<=i;j++)
 {
  for(a=1;a<=j;a++)
  {
   printf(" %d",j);
  }
  printf("\n");
 }
 }
 if(ans=='d'||ans=='D')
 {
  for(j=i;j>=1;j--)
 {
  for(a=1;a<=j;a++)
  {
   printf(" %d",j);
  }
  printf("\n");
 }
 }
 if(ans=='g'||ans=='G')
 {
  for(j=1;j<=i;j++)
 {
  for(a=1;a<=j;a++)
  {
   int r=(a+j)%2;
   if(r==0)
   {printf(" 1");}
   else{printf(" 0");}
  }
  printf("\n");
 }
 }
 if(ans=='h'||ans=='H')
 {
  for(j=1;j<=i;j++)
 {
  for(a=1;a<=j;a++)
  {
   int r=(((j*j)-j)/2)+a;
   printf(" %d",r);
  }
  printf("\n");
 }
 }
}
if(ans=='e'||ans=='E'||ans=='f'||ans=='F')
{
 if(i<=26)
 {
  if(ans=='e'||ans=='E')
  {
   for(j=1;j<=i;j++)
 {
  for(a=1;a<=j;a++)
  {
   int r=a+64;
   printf(" %c",r);
  }
  printf("\n");
 }
}
if(ans=='f'||ans=='F')
{
 for(j=i;j>=1;j--)
 {
  for(a=1;a<=j;a++)
  {
   int r=a+64;
   printf(" %c",r);
  }
  printf("\n");
 }
}
}
else{printf("\n\n The number of rows should be less than equal to 26.");}
}
}
else{printf("\n\n The chosen triangle couldn't be found.");}
return 0;
}

