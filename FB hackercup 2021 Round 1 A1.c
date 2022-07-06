#include <stdio.h>
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
int b=0,c=0;
char x,y;
while(string[b]=='F')
{b++;}
if(string[b]=='O')
{
    x='O';y='X';
}
else
{
    x='X';y='O';
}
for(int d=b+1;d<t;d++)
{
    if(string[d]==y)
    {
        c++;
        char temp;
        temp=x;
        x=y;
        y=temp;
    }
}
fprintf(out,"Case #%d: %d\n",a+1,c);
}
fclose(in);
fclose(out);
return 0;
}
