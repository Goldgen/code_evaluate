#include <stdio.h>
#include <stdlib.h>

int main()
{
   char C;

   while((C=getchar())!=EOF)
   {
       if(C=='a'||C=='e'||C=='i'||C=='o'||C=='u'||C=='A'||C=='E'||C=='I'||C=='O'||C=='U')
    {printf("yes");
    return 0;}


   }
printf("no");
    return 0;
}
