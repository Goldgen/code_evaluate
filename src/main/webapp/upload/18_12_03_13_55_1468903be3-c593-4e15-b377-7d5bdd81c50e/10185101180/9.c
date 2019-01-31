#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int a,b,i,j,k,x,y;
   char s1[81];
   char s2[81];
   gets(s1);
   scanf("%s",s2);
   a=strlen(s1);
   b=strlen(s2);
   char *p=&s1[0];
   char *q=&s2[0];
   if(a<b)
    y=-1;
   else
   {
    for(i=0,x=0;i<a-b+1;i++)
   {
       for(j=0,k=0;j<b;j++)
       {
           if(*(p+i+j)!=*(q+j))
            k++;
       }
       if(k==0)
       {
           x++;
           if(x==1)
            y=i;
       }
   }
   if(x==0)
    y=-1;
   }
   printf("%s: %d time(s), first at %d",s2,x,y);
   return 0;
}
