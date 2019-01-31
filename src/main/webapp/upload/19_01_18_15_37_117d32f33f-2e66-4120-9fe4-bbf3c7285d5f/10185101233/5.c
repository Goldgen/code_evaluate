#include <stdio.h>
 main()
{
    int a,b,c,d,e,f,g,h,i;
    scanf("%d%d%d\n%d%d%d\n%d%d\n",&a,&b,&c,&d,&e,&f,&g,&h);
    i = a+b+c+d+e+f+g+h;
    printf("%d\n",i);
    scanf("%d,%d,%d\n%d,%d,%d\n%d,%d\n",&a,&b,&c,&d,&e,&f,&g,&h);
    printf("%d",i);
    return 0;
}