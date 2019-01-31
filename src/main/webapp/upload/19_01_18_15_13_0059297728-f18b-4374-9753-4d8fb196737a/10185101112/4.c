#include <stdio.h>

int main()
{
   char letter;
   char letter1;
   scanf("%c",&letter);
   if ((letter>64)&&(letter<91))
   {
       letter1=letter+'a'-'A';
       printf("%c",letter1);
   }
   else
    printf("ERROR");
   return 0;
}
