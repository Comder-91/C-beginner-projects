#include <stdio.h>
int main()
{
float a,m,r,p;
printf("\n Enter the monthly installment (in Rs):");
scanf("%f",&a);
printf("\n Enter the time duration (in months):");
scanf("%f",&m);
printf("\n Enter the annual interest rate (in percent):");
scanf("%f",&r);
float b=0;
for(p=1;p<=m;p++)
{
b=b+(a/(1+(p*(r/1200))));
}
printf("\n The initial amount to be deposited (in Rs)=%f",b);
return 0;
}
