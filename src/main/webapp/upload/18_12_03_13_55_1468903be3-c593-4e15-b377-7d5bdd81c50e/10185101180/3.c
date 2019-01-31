#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char s1[81];
   char s2[81];
   scanf("%s",s1);
   getchar();
   scanf("%s",s2);
   char *a,*b;
   a=&s1[0];
   b=&s2[0];
   int i=0;
   while(*(a+i)!='\0'&&*(b+i)!='\0')
   {
       printf("%c",*(a+i));
       printf("%c",*(b+i));
       i++;
   }
   if(*(a+i)=='\0'&&*(b+i)!='\0')
   {
       int j;
       j=i;
       while(*(b+j)!='\0')
       {
           printf("%c",*(b+j));
           j++;
       }
   }
   if(*(a+i)!='\0'&&*(b+i)=='\0')
   {
       int k;
       k=i;
       while(*(a+k)!='\0')
       {
           printf("%c",*(a+k));
           k++;
       }
   }
   return 0;
}
