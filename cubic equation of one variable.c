#include <stdio.h>
int main()
{
float a,b,c,d;
printf("\n\n\n The form of the equation : ax^3 + bx^2 + cx + d = 0\n\n Enter the value of a:");
scanf("%f",&a);
printf("\n Enter the value of b:");
scanf("%f",&b);
printf("\n Enter the value of c:");
scanf("%f",&c);
printf("\n Enter the value of d:");
scanf("%f",&d);
printf("\n\n The roots of the given equation are : x=");
for(float e=0;e<9999;e+=0.000001)
{if((a*e*e*e+b*e*e+c*e+d)==0)
 printf(" %f,",e);
 if((b*e*e+d-a*e*e*e-c*a)==0)
 printf(" -%f,",e);}
 return 0;
 }
