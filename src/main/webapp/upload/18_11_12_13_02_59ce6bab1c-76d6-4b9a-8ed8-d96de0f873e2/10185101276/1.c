#include <stdio.h>
int r(int x,int y);
int main()
{
    int a=1,b=1;
    int n;
    scanf("%d",&n);
    for(;b<=n;b++)
    for(a=1;a<=b;a++){
        r(a,b);
        if(b!=n&&a==b)printf("\n");
    }
    return 0;
}
int r(int x,int y)
{
    printf(" %d * %d = ",x,y);
    if(x*y>=10)printf("%d",x*y);
    else printf(" %d",x*y);
}
