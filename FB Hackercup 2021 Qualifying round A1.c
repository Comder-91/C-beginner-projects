#include <stdio.h>
int main()
{FILE*in,*out;
in=fopen("Input.txt","r");
out=fopen("Output.txt","w");
int n;
fscanf(in,"%d",&n);
char string[n][100];
int answer[n];
for(int a=0;a<n;a++)
{fscanf(in,"\n%s",&string[a]);
int vowel=0,v=0,c=0;
for(int x=0;x<strlen(string[a]);x++)
{
   int num=0;
   for(int y=0;y<strlen(string[a]);y++)
   {
       if(string[a][x]==string[a][y])
        num++;
   }
   if(string[a][x]=='A'||string[a][x]=='E'||string[a][x]=='I'||string[a][x]=='O'||string[a][x]=='U')
   {
       vowel++;
       if(num>v)
       v=num;
   }
   else
   {
       if(num>c)
       c=num;
   }

}
answer[a]=strlen(string[a])-vowel+2*(vowel-v)>vowel+2*(strlen(string[a])-vowel-c)?vowel+2*(strlen(string[a])-vowel-c):strlen(string[a])-vowel+2*(vowel-v);}
for(int a=0;a<n;a++)
{
    fprintf(out,"Case #%d: %d\n",a+1,answer[a]);
}
fclose(in);
fclose(out);
return 0;
}
