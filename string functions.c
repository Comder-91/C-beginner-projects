/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int sstrlen(char *a)
{
int n=0;
while(*a!='\0')
{n++;a++;}
return(n);}
void sstrcpy(char *a,char *b)
{while(*a!='\0')
{*b=*a;
 a++;b++;}
 *b='\0';}
void sstrcmp(char *a,char *b)
{int t=0;
 while(*a!='\0' && *b!='\0')
 {if(*a!=*b)
  t=1;a++;b++;}
if(t==0)
printf("\n\n Both the strings are the same.");
else
printf("\n\n The strings are different.");
}
void sstrcat(char *a,char *b)
{char *string1=a;
 char *string2=b;
 while(*(++string1));
 while(*(string1++) = *(string2++));
 printf("\n\n Concatenated string: %s",a);}
void sstrrev(char *a)
{
}
void main()
{
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
char arr1[100],arr2[100],arr3[100],arr4[100],arr5[100];
printf("\n\n\n Enter the first string:");
scanf("%s",arr1);
printf("\n Enter the second string:");
scanf("%s",arr2);
printf("\n The string length of array 1 is = %d",sstrlen(arr1));
printf("\n The string length of array 2 is = %d",sstrlen(arr2));
sstrcpy(arr1,arr3);
sstrcpy(arr2,arr4);
printf("\n\n After copying the first string into the third string and the second string into the fourth string ,\n the third string is : %s ,\n and the fourth string is : %s",arr3,arr4);
sstrcmp(arr1,arr2);
sstrcat(arr1,arr2);
sstrrev(arr1);
sstrrev(arr2);
}
