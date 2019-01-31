#include<stdio.h>
#include<string.h>
int main()
{
   char str1[1001];
   char str2[1001];
   char *pos;
   pos = str1;
   int len2;
   while(scanf("%s",str1)&&strcmp(str1,"#")!=0)
   {
       scanf("%s",str2);
      int mark = 0;
       len2 = strlen(str2);
       while(strstr(pos,str2)!=NULL)
       {
           pos = strstr(pos,str2) + len2;
           mark++;
       }
       printf("%d\n",mark);
   }
   return 0;
}
