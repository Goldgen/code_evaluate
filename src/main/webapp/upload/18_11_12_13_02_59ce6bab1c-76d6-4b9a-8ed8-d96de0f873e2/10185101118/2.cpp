#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,c,b,t=0;
    char a;
    scanf("%d%d",&c,&b);
    for(i=c;i<=b;i++)
    {
        a=i;
        if(isgraph(a))
        {
            if(0==t)t=1;
            else printf("\n");
            if(a<100)printf("%d%7c",a,a);
            else printf("%d%6c",a,a);
        }
    }
    if(0==t)printf("NONE");
    return 0;
}