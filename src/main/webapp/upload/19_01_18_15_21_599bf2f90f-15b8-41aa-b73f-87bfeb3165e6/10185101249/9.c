#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    
	scanf("%d",&a);
    if(a>0)
        printf("1");
    else if(a<0)
        printf("-1");
    else
        printf("0");
    return 0;
}