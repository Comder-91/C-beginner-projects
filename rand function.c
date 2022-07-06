#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{int n;
printf("\n Enter the number of rows/coloumns:");
scanf("%d",&n);
int random[n][n];
srand(time(0));
for(int a=0;a<n;a++)
{for(int b=0;b<n;b++)
{if(a==b)
 random[a][b]=rand()%6;
 else if(a<b)
 {random[a][b]=rand()%3-1;
  random[b][a]=random[a][b];}}}
for(int a=0;a<n;a++)
{printf("\n");
for(int b=0;b<n;b++)
{if(random[a][b]<0)
 printf("%d ",random[a][b]);
 else if(a!=b&&random[a][b]==0)
 printf("  *");
 else
 printf(" %d ",random[a][b]);}}
return 0;
}
