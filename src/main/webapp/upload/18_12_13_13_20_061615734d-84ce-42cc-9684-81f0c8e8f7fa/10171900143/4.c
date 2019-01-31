#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int n;char s[100];
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
        s[i]=(s[i]=='Z'?'A':s[i]+1);
    printf("case #%d: %s\n",i,s);
   }


  return 0;

}