#include<stdio.h>
#include<string.h>
int main()
{
   char str1[80];
   char str2[80];
   int len1,len2,lenmax;
   scanf("%s",str1);
   scanf("%s",str2);
   len1 = strlen(str1);
   len2 = strlen(str2);
   lenmax = (len1>len2)?len1:len2;
   int m=1,n=1,i;
   for(i=0;i<lenmax;i++)
   {
       if(str1[i]!='\0'&&m==1)
         printf("%c",str1[i]);
	   else
		   m = 0;
       if(str2[i]!='\0'&&n==1)
        printf("%c",str2[i]);
	   else
		   n = 0;

   }

   return 0;

}