#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
 int n;
 scanf("%d\n",&n);
 char string[n][30];
 char copy[30];
 for (int i=0;i<n;++i)
 {
gets(string[i]);
 }
 for (int i=0;i<n;++i)
 {
     for(int k=i+1;k<n;++k)
     {
         if (strcmp(string[i],string[k])<0)
         {
             strcpy(copy,string[i]);
             strcpy(string[i],string[k]);
             strcpy(string[k],copy);
         }
     }
 }
 for (int i=0;i<n;++i)
 {
     puts(string[i]);
 }
 }
