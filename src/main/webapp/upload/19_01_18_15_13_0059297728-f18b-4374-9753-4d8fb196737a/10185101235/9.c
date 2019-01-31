#include <stdio.h>

main()
{
    int a = 0;
    scanf ("%d",&a);
    if(a > 0)
    {
        printf("1");
    }
	if(a==0)
    {
        printf("0");
    }
	if(a<0)
    {
        printf("-1");
    }
    return 0;
}
