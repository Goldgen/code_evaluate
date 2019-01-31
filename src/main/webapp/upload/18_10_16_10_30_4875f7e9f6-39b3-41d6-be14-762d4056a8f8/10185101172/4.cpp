#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
   if(a<91&&a>64)
    {
    a=a+'a'-'A';
    printf("%c",a);
    }
   else
    printf("ERROR");
 return 0;
}