#include <stdio.h>
int main()
{int a=0,b=0,c=0,d=0;
scanf("%d %d",&a,&b);
c=a>b?a:b;
d=a>b?b:a;
while(c!=0&&d!=0)
   {c=c%d;
    if(c==0)
	{ printf("最大公约数是: %d",d);
		break;}
    d=d%c;
    if(d==0)
        printf("最大公约数是: %d",c);
    }}