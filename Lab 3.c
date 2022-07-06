//Name-Aditya Prakash , Admission number-20JE0059
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
printf("\n Name - Aditya Prakash , Admission Number - 20JE0059\n\n\n Enter the number of members in the party:");
int n,l;
scanf("%d",&n);
struct profile
{char job[30];
char office[30];
};
struct profile member[n];
printf("\n Enter the individual's information in the format : (job__place of work)\n");
for(int a=0;a<n;a++)
{printf(" Profile of member%d : ",a+1);
scanf("%s %s\n",member[a].job,member[a].office);}
for(int b=0;b<n;b++)
{printf("\n The profile of member%d : JOB-%s , PLACE OF WORK-%s",b+1,member[b].job,member[b].office);}
printf("\n Enter the number of test cases/loops with random status of cars of members :");
scanf("%d",&l);
for(int a=0;a<l;a++)
{printf("\n LOOP%d",a+1);
srand(time(0));
int status[n][n];
for(int c=0;c<n;c++)
{for(int d=0;d<n;d++)
{if(c==d)
 status[c][d]=rand()%6;
 else if(c!=d&&c<d)
 status[c][d]=rand()%3-1;
 status[d][c]=0-status[c][d];
 }}
 printf("         ");
 for(int c=0;c<n;c++)
printf("member%d",c+1);
 for(int c=0;c<n;c++)
{printf(" member%d ",c+1);
for(int d=0;d<n;d++)
{printf("    %d   ",&status[c][d]);}
}}
return 0;
}

