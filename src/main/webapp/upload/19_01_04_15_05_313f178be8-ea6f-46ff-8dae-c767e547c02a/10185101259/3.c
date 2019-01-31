#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000

int main()
{
   char str1[SIZE],str2[SIZE],temp[SIZE][SIZE];
   while(scanf("%s",str1)&&str1[0]!='#')
   {
       scanf("%s",str2);
       int sum=0,len=strlen(str2);
       char *str3;
       while(str3=strstr(str1,str2))
       {
           sum++;
           strcpy(str1,str3+len);
       }
       printf("%d\n",sum);

   }
   return 0;
}
