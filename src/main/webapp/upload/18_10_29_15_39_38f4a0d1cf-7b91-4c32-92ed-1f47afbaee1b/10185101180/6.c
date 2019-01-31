#include <stdio.h>
int main()
{
    int x,y,a,b,i;
    scanf("%d %d",&x,&y);
    if(x<y)
    {
        a=x;
        b=y;
    }
    else
    {
        a=y;
        b=x;
    }
	i=1;
    while(i!=0)
    {
        i=b%a;
        b=a;
        a=i;
    }
    printf("最大公约数是: %d",b);
    return 0;
}
