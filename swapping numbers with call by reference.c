/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
int main()
{
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
int x,y;
printf("\n\n\n Enter two numbers:x=");
scanf("%d",&x);
printf("\t\t   y=");
scanf("%d",&y);
swap(&x,&y);
printf("\n The numbers after swapping values are : x=%d , y=%d",x,y);
return 0;
}
