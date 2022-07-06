/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int main()
{
int n;
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059\n\n\n Enter the number of students:");
scanf("%d",&n);
struct student_record
{char name[30];
int date;
int month;
int year;
int marks;
}student[n];
for(int a=0;a<n;a++)
{printf("\n\n Details of student%d :\n\n Name-",a+1);
scanf("%[^\n]",&student[a].name);
printf(" Date of birth(dd)-");
scanf("%d",&student[a].date);
printf(" Month of birth(mm)-");
scanf("%d",&student[a].month);
printf(" Year of birth(yyyy)-");
scanf("%d",&student[a].year);}
return 0;
}
