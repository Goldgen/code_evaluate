#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int v(int x)
{
    if(isgraph(x))
    printf("%-8d%c",x,x);
}
int main()
{
    int a,b,i;
    int f=0;
scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
   {
        if(isgraph(i))
        {   f=1;
        v(i);
        if(i<b)
            printf("\n");
        }

   }
    if(!f)
        printf("NONE");
    return 0;
}
