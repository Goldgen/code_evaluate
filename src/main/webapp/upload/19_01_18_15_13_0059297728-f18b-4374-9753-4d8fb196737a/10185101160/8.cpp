#include <stdio.h>
int main()
{
		int a,b,c,i;
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
		{
			i=a;a=b;b=i;
		}
        if(a>c)
		{
			i=a;a=c;c=i;
		}
        if(b>c)
		{
			i=b;b=c;c=i;
		}
        printf("%d",b);
	    return 0;
}