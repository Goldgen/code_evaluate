#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int main()
{
   char s1[85],s2[85];
   int i,j,k=0,g=0,b;
   gets(s1);
   gets(s2);
   for(i=0;i<=strlen(s1)-strlen(s2);i++)
   {
       for(j=0;j<strlen(s2);j++)
        {
            if(s1[i+j]==s2[j])
                k++;
        }
        if(k==strlen(s2))        
            g++;
        if(g==1)                  
        {
            b=i;
            g++;                  
        }
        k=0;
   }
   if(g==0)                         
     printf("%s: 0 time(s), first at -1",s2);
     else
    printf("%s: %d time(s), first at %d",s2,g-1,b);
	return 0;
}