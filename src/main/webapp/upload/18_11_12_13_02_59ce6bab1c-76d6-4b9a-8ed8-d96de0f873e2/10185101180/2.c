#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int code(int a,int b);
int main()
{
   char st,ed;
   scanf("%d %d",&st,&ed);
   code(st,ed);
   return 0;
}
int code(int a,int b)
{
    int i=0;
    while(a<b+1)
    {
        if(isgraph(a))
        {
            if(i>0)
                printf("\n");
            if(a<100)
            printf("%d      %c",a,a);
            else
                printf("%d     %c",a,a);
            i++;
        }
        a++;
    }
    if(b<33)
        printf("NONE");
}
