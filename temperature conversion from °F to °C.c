#include <stdio.h>
int main()
{
float fahrenheit,celcius;
printf("\n Enter the desired temperature in degree Fahrenheit:");
scanf("%f",&fahrenheit);
celcius=((fahrenheit-32)*5/9);
printf("\n The magnitude of the given temperature in degree celcius C=%f",celcius);
return 0;
}
