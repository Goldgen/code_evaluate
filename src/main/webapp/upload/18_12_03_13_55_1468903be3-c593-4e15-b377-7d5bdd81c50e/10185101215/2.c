#include<stdio.h>
#include<string.h>
int main()
{
    char a[100][100],b[300];
    int i,x,j;
   scanf("%d\n",&x);
   for(i=0;i<x;i++)
   gets(a[i]);
   for(i=0;i<x;i++)
   {
       for(j=x-1;j>i;j--)
        if(strcmp(a[j],a[j-1])>0)
         {
             strcpy(b,a[j-1]);
             strcpy(a[j-1],a[j]);
             strcpy(a[j],b);
        }
   }
   for(i=0;i<x;i++)
    printf("%s\n",a[i]);
  return 0;
}