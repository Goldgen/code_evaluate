#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    int i=1;
    scanf("%d+%d=%d",&a,&b,&c);
   for(i=1;i<=10;i++)
   {
       if(((a*pow(10,i))+b)==c)
        {printf("%d",i);}
        else if(((b*pow(10,i))+a)==c)
        {
            printf("%d",-i);
        }
        else continue;
   }

    return 0;
}
