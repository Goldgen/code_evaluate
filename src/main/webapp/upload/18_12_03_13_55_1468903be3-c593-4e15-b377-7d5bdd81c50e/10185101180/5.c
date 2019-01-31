#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int a,b,n,i,j,x,z;
   char s1[81];
   char s2[81];
   scanf("%s %s",s1,s2);
   a=strlen(s1);
   b=strlen(s2);
   if(a!=b)
    printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
   if(a==b)
   {
       n=a-1;
       for(i=0,x=0;i<n+1;i++)
       {
           for(j=0;j<n;j++)
           {
           z=s1[j];
           s1[j]=s1[j+1];
           s1[j+1]=z;
           }
           if(strcmp(s1,s2)==0)
            x++;
       }
       if(x==0)
        printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
       else
        printf("\"%s\" is a rotation of \"%s\"",s1,s2);
   }
   return 0;
}
