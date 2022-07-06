#include<stdio.h>
int main()
{
    short n,f=0,ans[160];
    ans[0]=1;
    for(short b=1;b<160;b++)
        ans[b]=0;
    scanf("%hd",&n);
    for(short a=2;a<=n;a++)
    {
        short arr[160];
        for(short b=0;b<160;b++)
            arr[b]=0;
        for(short b=0;b<160;b++)
        {
            short temp=a*ans[b];
            arr[b]+=(temp%10);
            temp/=10;
            arr[b+1]+=(temp%10);
            temp/=10;
            arr[b+2]+=temp;
        }
        for(short b=0;b<160;b++)
        {
            if(arr[b]>9)
            {
                short temp=arr[b];
                arr[b]=temp%10;
                temp/=10;
                arr[b+1]+=temp;
            }
        }
        for(short b=0;b<160;b++)
            ans[b]=arr[b];
    }
    for(short b=159;b>=0;b--)
    {
        if(f==0&&ans[b]!=0)
        {
            f=1;
            printf("%hd",ans[b]);
        }
        else if(f==1)
            printf("%hd",ans[b]);
    }
    return 0;
}
