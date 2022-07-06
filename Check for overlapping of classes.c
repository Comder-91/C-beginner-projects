#include <stdio.h>
int main()
{
int n,final=0;
printf("\n Enter the number of classes(n):");
scanf("%d",&n);
float class[n][2];
for(int t=0;t<n;t++)
{
printf("\n Start and end time of class %d:",t+1);
scanf("%f %f",&class[t][0],&class[t][1]);
}
for(float test=0;test<24;test+=0.5)
{
int a=0;
for(int t=0;t<n;t++)
{
if(test>class[t][0]&&test<class[t][1])
a++;
}
if(a>1)
final++;
}
if(final==0)
printf("\n TRUE");
else
printf("\n FALSE");
return 0;
}
