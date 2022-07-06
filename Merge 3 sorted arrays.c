#include <stdio.h>
int main()
{
    int arr[3][100],length[3];
    for(int a=0;a<3;a++)
    {
        printf("Elements of %d sorted array: ",a+1);
        char temp=getchar();
        int i=0,d=0,sign=1;
        length[a]=0;
        while(temp!='\n')
        {
            if(temp=='-')
                sign*=-1;
            else if(temp=='0'||temp=='1'||temp=='2'||temp=='3'||temp=='4'||temp=='5'||temp=='6'||temp=='7'||temp=='8'||temp=='9')
                d=(d*10)+(temp-48);
            else if(temp==' ')
            {
                arr[a][i]=d*sign;
                i++;
                d=0;
                sign=1;
                length[a]++;
            }
            temp=getchar();
        }
        arr[a][i]=d*sign;
        length[a]++;
        arr[a][i+1]=2147483647;
    }
    //M E R G E
    printf("Elements of the array after merging:");
    int i1=0,i2=0,i3=0;
    while(i1+i2+i3<length[0]+length[1]+length[2])
    {
        if(arr[0][i1]<=arr[1][i2]&&arr[0][i1]<=arr[2][i3])
        {
            printf(" %d",arr[0][i1]);
            i1++;
        }
        else if(arr[1][i2]<arr[0][i1]&&arr[1][i2]<=arr[2][i3])
        {
            printf(" %d",arr[1][i2]);
            i2++;
        }
        else if(arr[2][i3]<arr[0][i1]&&arr[2][i3]<arr[1][i2])
        {
            printf(" %d",arr[2][i3]);
            i3++;
        }
    }
    return 0;
}
