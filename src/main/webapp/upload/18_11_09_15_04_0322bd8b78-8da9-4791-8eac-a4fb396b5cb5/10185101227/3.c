#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
   char m[20];
   gets(m);
   int a=0,b=0;
   while (m[b])
   {switch (m[b])
   {case 'a': case 'e': case 'i': case '0': case 'u':
	case 'A':  case 'E': case 'I': case 'O': case 'U':
    ++a; break;
    default: break;}
    ++b;}
   if (a==0) printf("no");
   else printf("yes");
   return 0;
}
