#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char str[100][100];
   char *p[100],**pp=p,*temp;
   int i,j,n;
   scanf("%d\n",&n);
   for(i=0;i<n;i++)
   {
       p[i]=str[i];
       gets(p[i]);
   }
   for(i=0;i<n-1;i++)
    for(j=0;j<n-1;j++)
       if(strcmp(p[j],pp[j+1])>0)
       {
           temp=pp[j];
           pp[j]=pp[j+1];
           pp[j+1]=temp;
       }
       for(i=0;i<n;i++)
        puts(pp[i]);

}