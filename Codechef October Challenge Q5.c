#include <stdio.h>
short digit(long n)
{
    if(n<10)
        return 1;
    else
    return 1+digit(n/10);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int a=0;a<t;a++)
    {
        long n,n1,ex1=0;
        short d;
        scanf("\n%ld  %hd",&n,&d);
        n1=n;
        int arr1[digit(n)],arr2[digit(n)];
        for(int a=digit(n)-1;a>=0;a--)
        {
            arr1[a]=n1%10;
            n1/=10;
        }
        int contact=0;
        for(int a=0;a<digit(n);a++)
        {
            if(arr1[a]==d&&contact==0)
            {
                arr2[a]=arr1[a]+1;
                contact=1;
            }
            else
            {
                if(contact==1)
                {
                    if(d==0)
                        arr2[a]=1;
                    else
                        arr2[a]=0;
                }
                else
                    arr2[a]=arr1[a];
            }
        }
        for(int a=0;a<digit(n);a++)
        {
            ex1=ex1*10+arr2[a];
        }
        printf("%ld\n",ex1-n);
    }
    return 0;
}
