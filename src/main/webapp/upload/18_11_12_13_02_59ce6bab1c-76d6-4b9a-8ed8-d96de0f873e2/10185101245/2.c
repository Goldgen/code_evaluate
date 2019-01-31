#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int v(int x)
{
    if(isgraph(x))
    printf("%-3d     %c",x,x);
}
int main()
{
    int i;
    int j;
    char a;
    int f=0;
scanf("%d %d",&i,&j);
    for(a=i;a<=j;a++)
   {
    if(isgraph(a))
    {
        f=1;
        v(a);
        if(a!=j)
            printf("\n");
    }

   }
    if(!f)
        printf("NONE");



    return 0;
}