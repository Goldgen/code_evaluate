#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)a=b;
	if(a<c)a=c;
	printf("%d",a);
    return 0;
}
