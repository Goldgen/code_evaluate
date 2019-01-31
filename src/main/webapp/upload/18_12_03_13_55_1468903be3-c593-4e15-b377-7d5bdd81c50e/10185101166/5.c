#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char str1[85] , str2[85] , *pstr=&str2[0] , m;
   int i , j , t = 0;
   scanf("%s %s",&str1,&str2);
   for(i = 0;i < strlen(str2);i++)
   {
       m=*(pstr + strlen(str2) - 1);
       for(j = strlen(str2) - 1;j > 0;j--)
        {
            *(pstr + j)=*(pstr + j - 1);
        }
       *pstr = m;
        if(strcmp(str1,str2)==0)
            t++;
   }
    if(t > 0)
        printf("\"%s\" is a rotation of \"%s\"",str1,str2);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"",str1,str2);
}