#include <stdio.h>
int main()
{
    char ch;
   scanf("%c",&ch);
   if(ch>64&&ch<91)
   {ch=ch-'A'+'a';
   printf("%c",ch);}
   else
    printf("ERROR");
}