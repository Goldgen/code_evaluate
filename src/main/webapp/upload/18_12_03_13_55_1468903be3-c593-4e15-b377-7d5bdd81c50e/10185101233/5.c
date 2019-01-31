#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main()
{
   char S1[80],S2[80];
   char*a=&S2[0],l;
   int i,j=0;
   int y=0;
   scanf("%s%s",S1,S2);
   for(i=0;i<strlen(S2);i++)
   {
       l=*(a+strlen(S2)-1);
       for(j=strlen(S2)-1;j>0;j--)
        {
            *(a+j)=*(a+j-1);
        }
       *a=l;
        if(strcmp(S1,S2)==0)
            y++;
   }
    if(y>0)
        printf("\"%s\" is a rotation of \"%s\"",S1,S2);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"",S1,S2);
}