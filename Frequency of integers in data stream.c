#include <stdio.h>
int main()
{int b=0,c=0,d=0,e=0,f=0;
char arr[50];
printf("\n Enter the data stream:");
scanf("%[^\n]",&arr);
for(int a=0;a<50;a++)
{
if(arr[a]!=' '&&arr[a]!='\0')
{if(arr[a]=='1')
b++;
if(arr[a]=='3')
c++;
if(arr[a]=='5')
d++;
if(arr[a]=='7')
e++;
if(arr[a]=='9')
f++;
}}
printf(" Odd digits : 1 3 5 7 9\n Frequency : %d %d %d %d %d",b,c,d,e,f);
return 0;
}
