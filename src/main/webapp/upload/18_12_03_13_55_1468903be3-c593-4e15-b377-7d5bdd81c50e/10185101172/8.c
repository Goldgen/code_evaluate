#include <stdio.h>
#include <string.h>


int hex2int(char s[]);

int main()
{
   int result=1;
   char s[80];
   gets(s);
   int i=0;
   for(i=0;i<strlen(s)/2;i++)
   {
       if(s[i]!=s[strlen(s)-1-i])
        {
            result=0;
            break;
        }
   }
   if(result)
    printf("True");
   else
    printf("False");
   return 0;
}
