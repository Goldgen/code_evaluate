#include <stdio.h>
#include<string.h>
#define SPACE ' '
int main()
{
   int n;
   scanf("%d",&n);
   char s[n][55];
   int i,j;
   for(i=0;i<n;i++)
   {
       scanf("%s",s[i]);
   }
   for(i=0;i<n;i++)
   {

       printf("case #%d: ",i);
       for(j=0;*(s[i]+j)!='\0'&&*(s[i]+j)!='\n';j++)
       {
           if(*(s[i]+j)==SPACE)
             putchar(*(*s+j));
           else if(*(s[i]+j)=='Z')
             putchar('A');
           else
            putchar(*(s[i]+j)+1);
       }
       printf("\n");
   }


    return 0;
}
