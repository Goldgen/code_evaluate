#include<stdio.h>
int main(void)
{
    int a;
    int b;
    scanf("%d%d",&a,&b);
    for(a,b;a!=b;)
    {
        if(a>b)
        a=a-b;
    else
        b=b-a;
    }
    printf("最大公约数是: %d",a);
	return 0;
}
