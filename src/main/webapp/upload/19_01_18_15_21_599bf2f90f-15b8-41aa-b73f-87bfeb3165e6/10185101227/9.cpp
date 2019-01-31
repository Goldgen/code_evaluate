#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    double x;
	int y;
    scanf("%lf",&x);
    if (x==0)
        y=0;
    else
        y=x>0?1:-1;
    printf("%d",y);
    return 0;
}
