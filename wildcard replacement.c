#include <stdio.h>
int main()
{
    long t;
    scanf("%ld",&t);
    for(long a=0;a<t;a++)
    {
        char string[1000000];
        long n;
        scanf("\n%s\n%ld",string,&n);
        long ans[n];
        for(long b=0;b<n;b++)
        {
            ans[b]=0;
            long s,l,front=0;
            scanf("\n%ld %ld",&s,&l);
            short stack[((l-s)/4)+1];
            stack[0]=1;
            for(long c=s-1;c<l;c++)
            {
                if(string[c]=='('||string[c]=='+')
                {
                    stack[front+1]=stack[front];
                    front++;
                }
                else if(string[c]=='-')
                {
                    stack[front+1]=-1*stack[front];
                    front++;
                }
                else if(string[c]=='?')
                {
                    if(stack[front]==1)
                        ans[b]++;
                    front--;
                }
                else if(string[c]==')')
                    front--;
            }
        }
        for(long b=0;b<n;b++)
            printf("%ld ",ans[b]);
        printf("\n");
    }
    return 0;
}
