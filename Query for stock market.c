#include <stdio.h>
int main()
{int n;
printf("q = ");
scanf("%d",&n);
int b[n],s[n][2];
char q[n];
for(int a=0;a<n;a++)
{scanf("\n%c",&q[a]);
if(q[a]=='B')
{scanf(" %d",&b[a]);
s[a][0]=0;s[a][1]=0;}
if(q[a]=='S')
{scanf(" %d %d",&s[a][0],&s[a][1]);
b[a]=0;}}
for(int a=0;a<n;a++)
{
    if(q[a]=='B')
    {printf("\nBuying Successful");}
    if(q[a]=='S')
    {
        int temp=0,temp1;
        for(int t=0;t<=a;t++)
        {
            if(s[a][0]<=b[t]&&s[a][1]>=b[t])
            {temp++;
            temp1=t;
             break;}
        }
        if(temp!=0)
        {printf("\n\t %d",b[temp1]);
        b[temp1]=0;}
        else
        printf("\n\t-1");
    }
}
return 0;
}
