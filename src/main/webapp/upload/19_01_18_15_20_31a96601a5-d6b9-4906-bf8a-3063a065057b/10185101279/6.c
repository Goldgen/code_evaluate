#include <stdio.h>
#include<string.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b)
    d=a;
    else
    d=b;
    if(d>=c)
    printf("%d",d);
    else
	{ 
    d=c;
    printf("%d",d);
	}




    return 0;
}



