#include <stdio.h>
#include <ctype.h>

int main()
{
int n,m,i,a=0;
scanf("%d %d",&n,&m);
for(i=n;i<=m;i++)
{
    if(isgraph(i))
        {printf("%-8d%c",i,i);
        a=1;
        if(i<m)
            printf("\n");}
}
if(a==0)
    printf("NONE");
 return 0;}