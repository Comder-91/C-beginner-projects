/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int main()
{
printf("\nNAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
#define pi 3.141593
float radius;
printf("\n\n\nEnter the radius of the desired circle:");
scanf("%f",&radius);
float circumference=pi*2*radius;
float area=pi*radius*radius;
printf("\nThe value of pi taken = 3.141593,\n\nThe formula used:Circumference=2*pi*radius,\n\n                 Area=pi*radius*radius\n\nThe circumference of the given circle is=%f,\n\nThe area of the given circle is=%f",circumference,area);
return 0;
}
