/*C++*/
#include<stdio.h>
#include<ctype.h>
void ch(int x);
int main(void)
{
    int a,b,i,t=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(isgraph(i))
        {
            t++;
        }
    }
    if(t)
    {
        for(i=a;i<=b;i++)if(isgraph(i))
        {
            ch(i);
            printf("\n");
        }
    }
    else printf("NONE");
    return 0;
}
void ch(int i)
{
    printf("%-3d     %c",i,i);
}
