#include <stdio.h>
#include <string.h>
int main()
{FILE*in,*out;
in=fopen("Input.txt","r");
out=fopen("Output.txt","w");
int n;
fscanf(in,"%d",&n);
for(int a=0;a<n;a++)
{int t;
fscanf(in,"\n%d",&t);
char string[t];
fscanf(in,"\n%s",string);
long int sum=0;
for(int b=0;b<t;b++)
{
int e=b;
long int c=0;
char x,y;
while(string[e]=='F')
{e++;}
if(string[e]=='O')
{
    x='O';y='X';
}
else
{
    x='X';y='O';
}
for(int d=e+1;d<t;d++)
{
    if(string[d]==y)
    {
        c=c+t-d;
        char temp;
        temp=x;
        x=y;
        y=temp;
    }
}
sum+=c;
}
fprintf(out,"Case #%d: %llu\n",a+1,sum%1000000007);
}
fclose(in);
fclose(out);
return 0;
}
