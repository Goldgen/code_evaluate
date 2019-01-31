#include <stdio.h>
#include <string.h>
#include <math.h>

int hex2int(char s[]);

int main()
{
   char s[80];
   gets(s);
   int i,count=0,pos=0,max=0;
   for(i=0;i<strlen(s);i++)
   {
       if(s[i]!=' ')
        count++;
       else
       {
           if(count>max)
            {max=count;
            pos=i;}
            count=0;
       }
   }
   for(i=pos-max;i<pos;i++)
    printf("%c",s[i]);
   printf("\n");
   return 0;
}
