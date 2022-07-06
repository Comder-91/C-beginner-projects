/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int main()
{
char ch,name[30];
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059\n\n\n Enter your name:");
scanf("%[^\n]",name);
union age
{int a;
char b[2];
}person,*ptr;
ptr=&person;
printf("\n\n Enter your age(in years) :");
scanf("%d",&(*ptr).a);
printf("\n\n The age of %s is %d.",name,ptr->a);
return 0;
}
