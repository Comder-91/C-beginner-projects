#include <stdio.h>
int checkleft(int *ptr)
{
    int c=0;
    while(*ptr!=1&&*ptr!=NULL)
    {
        c++;
        ptr-=2;
    }
    return c;
}
int checkright(int *ptr)
{
    int c=0;
    while(*ptr!=1&&*ptr!='\!')
    {
        c++;
        ptr+=2;
    }
    return c;
}
int main()
{
    int t;
    scanf("%d",&t);
    int ans[t];
    for(int a=0;a<t;a++)
    {
        ans[t]=0;
        int n;
        scanf("\n%d",&n);
        int string[n];
        scanf("\n%s",string);
        for(int b=0;b<n;b++)
        {
            int left=checkleft(&string[b]);
            int right=checkright(&string[b]);
            ans[t]+=(left<right?left:right);
        }
    }
    for(int a=0;a<t;a++)
    {
        printf("Case #%d: %d\n",a+1,ans[t]);
    }
return 0;
}
