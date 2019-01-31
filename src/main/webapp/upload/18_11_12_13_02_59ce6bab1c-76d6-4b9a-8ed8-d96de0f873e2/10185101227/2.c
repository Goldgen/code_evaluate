#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char d(int a)
{   char y;
    if (isgraph(a)!=0)  y=a;
    else  y=0;
 return y;
}
int main()
{
   int a,b,i=0;
   scanf("%d %d",&a,&b);
   while (a<b)
    {if (d(a)!=0)
    {printf("%-8d%c\n",a,d(a)); ++i; }
    ++a;
    }
   if  (d(b)!=0) {printf("%-8d%c",b,d(b)); ++i;}
   if (i==0) printf("NONE");
   return 0;
}

