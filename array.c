/*NAME - Aditya Prakash
  ADMISSION NUMBER - 20JE0059*/
#include <stdio.h>
int main()
{
int a,b,c,d,e,g,h,i,j,k,l,m,n,p,x,y,z;
char ans,temp;
printf("\n NAME - Aditya Prakash , ADMISSION NUMBER - 20JE0059 ");
printf("\n\n\n Enter the size of the first array(numeric):");
scanf("%d",&i);
printf("\n Enter the size of the second array(alphabetical):");
scanf("%d",&j);
printf("\n Enter the size of the third array(alphanumeric):");
scanf("%d",&k);
printf("\n Enter the maximum number of characters in an element in the arrays:");
scanf("%d",&l);
if(i<=20&&j<=20&&k<=20)
{
int numeric[i];
char first[i][l],second[j],third[k][l],final[i+j+k][l];
printf("\n\n Enter the first array:");
  for(a=0;a<i;a++)
  {scanf("%s",first[a]);printf("\t\t       ");}
  printf("\n\n Enter the second array:");
  for(b=0;b<j;b++)
  {scanf("%s",&second[b]);printf("\t\t        ");}
  printf("\n\n Enter the third array:");
  for(c=0;c<k;c++)
  {scanf("%s",third[c]);printf("\t\t       ");}
printf("\n\n The first array should be sorted in which order:1.Ascending\n\t\t\t\t\t         2.Descending");
scanf("%c",&ans);
for(x=0;x<i;x++)
{z=0;y=0;
while(first[x][y]!='\0')
{z=(z*10)+first[x][y]-48;y++;}
numeric[x]=z;}
for(g=0;g<i;g++)
{for(h=g+1;h<i;h++)
{if(numeric[g]>numeric[h])
{char temp[l];
for(m=0;m<l;m++)
{temp[m]=first[g][m];
  first[g][m]=first[h][m];
  first[h][m]=temp[m];}}}}
printf("\n\n The first array in ascending order is:");
for(a=0;a<i;a++)
{
 printf(" %s ,",first[a]);
}
for(d=0;d<j;d++)
{
n=second[d];
 for(e=d+1;e<j;e++)
 {
  p=second[e];
   if(n>=65&&n<=90&&p>=97&&p<=122&&p<=n+32)
  {temp=second[d];
   second[d]=second[e];
   second[e]=temp;}
   else if(n>=65&&n<=90&&p>=65&&p<=90&&n>=p)
  {temp=second[d];
   second[d]=second[e];
   second[e]=temp;}
   else if(n>=97&&n<=122&&p>=97&&p<=122&&n>=p)
  {temp=second[d];
   second[d]=second[e];
   second[e]=temp;}
   else if(n>=97&&n<=122&&p>=65&&p<=90&&p<=n-33)
  {temp=second[d];
   second[d]=second[e];
   second[e]=temp;}
 }
}
printf("\n\n The second array in ascending order is:");
for(b=0;b<j;b++)
{
 printf(" %c ,",second[b]);
}
for(c=0;c<i;c++)
{for(d=0;d<l;d++)
{final[c][d]=first[c][d];}}
for(c=i;c<i+j;c++)
{final[c][0]=second[c-i];}
for(c=i+j;c<i+j+k;c++)
{for(d=0;d<l;d++)
{final[c][d]=third[c-i-j][d];}}
printf("\n\n The array formed upon merging the three arrays is:");
for(int m=0;m<i+j+k;m++)
{printf(" %s ,",final[m]);}
printf("\n\n The palindrome elements in the third array are:");
for(c=i+j;c<i+j+k;c++)
{int f=0;
while(final[c][f]!='\0')
{f++;}
int r=0,q=f/2;
for(f=0;f<q;f++)
{if(final[c][f]=final[c][(2*q)-f])
{r++;}}
if(r==q)
{printf(" %s,\n\t\t\t\t\t\t",final[c]);}}
}
else{printf("\n\n The array size cannot be greater than 20.");}
return 0;
}

