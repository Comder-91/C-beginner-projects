#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int ans[t];
    for(int a=0;a<t;a++)
    {
        int n;
        scanf("\n%d",&n);
        int string[n];
        scanf("%s",string);
        ans[a]=0;
        int id=0;
        for(int b=0;b<=n;b++)
        {
            if(string[b]==1&&ans[t]==0)
            {
                ans[a]+=(b*((b+1)/2));
                id=b;
            }
            else if(string[b]==1&&ans[t]!=0)
            {
                if((b-id)%2==1)
                {
                    ans[a]+=(((b+id)/2)*(((b+id)/2)+1));
                    id=b;
                }
                else if((b-id)%2==0)
                {
                    ans[a]+=(((b+id)/2)*(((b+id)/2)+1))-((b-id)/2)+id;
                    id=b;
                }
            }
            else if(string[b]=='\0')
            {
                ans[a]+=(((b-1-id)*(b-id))/2);
            }
        }

    }
    for(int a=0;a<t;a++)
    {
        printf("Case #%d: %d\n",a+1,ans[a]);
    }
    return 0;
}
