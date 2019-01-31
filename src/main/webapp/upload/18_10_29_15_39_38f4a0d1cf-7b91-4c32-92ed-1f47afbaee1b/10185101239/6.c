#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
		c=a;
        a=b;
        b=c;
    }

    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    printf("最大公约数是: %d",a);
    return 0;
}
