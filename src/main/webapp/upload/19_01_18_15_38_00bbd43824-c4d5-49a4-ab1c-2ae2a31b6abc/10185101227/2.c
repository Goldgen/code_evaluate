#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int x,p,n;
    scanf("%u%u%u",&x,&p,&n);
	printf("%u",(x>>(p-n+1))&((1<<n)-1));
    return 0;
}
