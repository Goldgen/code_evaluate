#include <stdio.h>

main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf ("%d %d",&a,&b);
    c = a >= b ? a : b;
    printf("%d",c);
    return 0;
}
