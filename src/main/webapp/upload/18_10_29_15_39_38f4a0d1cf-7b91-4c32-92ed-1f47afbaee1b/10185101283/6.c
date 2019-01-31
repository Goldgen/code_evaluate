#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    c=a<=b? a:b;   //c is min
    d=a>=b? a:b;    //d is max
    while(d%c!=0)
	{ e=d%c;
        d=c;
        c=e;
	}
    printf("最大公约数是: %d",c);
    return 0;
}
