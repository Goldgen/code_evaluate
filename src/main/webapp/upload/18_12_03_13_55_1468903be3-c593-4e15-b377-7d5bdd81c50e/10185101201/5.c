#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main()
{
   char s1[85],s2[85],*d=&s2[0],k;
   int i,j,t=0;
   scanf("%s %s",&s1,&s2);
   for(i=0;i<strlen(s2);i++)
   {
       k=*(d+strlen(s2)-1);
       for(j=strlen(s2)-1;j>0;j--)
        {
            *(d+j)=*(d+j-1);
        }
       *d=k;
        if(strcmp(s1,s2)==0)
            t++;
   }
    if(t>0)
        printf("\"%s\" is a rotation of \"%s\"",s1,s2);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
}
