#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main()
{
   int i,j,b,g;
   scanf("%d",&i);
   getchar();
   char s[i][35],*t[i],*f=NULL;
   for(j=0;j<i;j++)
   {
       gets(s[j]);
   }
   for(j=0;j<i;j++)
    t[j]=*(s+j);
   for(g=0;g<i-1;g++)
    for(b=0;b<i-g-1;b++)
    {
       if(strcmp(t[b],t[b+1])>0)
       {
           f=t[b];
           t[b]=t[b+1];
           t[b+1]=f;
       }
    }
   for(b=i-1;b>=0;b--)
   {
       printf("%s",t[b]);
       if(b>0)
        printf("\n");
   }
}