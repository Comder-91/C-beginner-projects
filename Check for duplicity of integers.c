#include <stdio.h>
int main()
{
    int n,p,m=0;
    printf("\n Enter the number of integers in the array:");
    scanf("%d",&n);
    p=n;
    int arr[n];
     for(int a=0;a<n;a++)
     {printf(" Enter the %d th element:",a+1);
     scanf("%d",&arr[a]);}
     for(int a=0;a<n;a++)
     {for(int b=0;b<n;b++)
     {if(b<a&&arr[b]==arr[a])
      {p--;
      break;}
      if(b==a)
      continue;
      if(b>a&&arr[b]==arr[a])
      {m++;
      break;}
     }}
     printf(" The number of elements which are repeated:%d",m);
     printf("\n The number of different elements:%d",p);
     if(m>=((p+1)/2))
     printf("\n Its a duplicity-bound array.");
    return 0;
}
