#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   int a,b,g=0;
   char s[100001],s_0[10001];
   int list[10001];
   gets(s);
   scanf("%s",s_0);
   a=strlen(s);
   b=strlen(s_0);
   int c,d;
   for(c=0;c<=a-b;c++)
   {
       int e,num=0,f,x=0;
       e=c;
       for(d=0;d<b;d++)
       {
           if(s[e]==s_0[d])
           {
               num++;
               e++;
           }
       }
       if(num==b)
       {
           g++;
           list[g]=c;
       }
   }
   if(g==0)
   {
       printf("-1");
   }
   else
   {
       printf("%c:%dtime(s),first at %d",s_0,g,list[1]);
   }
   return 0;
}
