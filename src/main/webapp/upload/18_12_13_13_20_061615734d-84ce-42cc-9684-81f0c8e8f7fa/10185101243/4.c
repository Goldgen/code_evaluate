#include <stdio.h>
#include<string.h>
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
       for(j=0;(s[i][j]!='\0')&&(s[i][j]!='\n');j++)
       {

           if(s[i][j]=='Z')
             printf("A");
           else
            printf("%c",s[i][j]+1);
       }
      printf("\n");
   }


    return 0;
}
