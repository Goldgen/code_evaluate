#include <stdio.h>

main()
{
    int a,b,c,d,e,f,g,h = 0;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&d,&e,&f);
    scanf("%d %d",&g,&h);
    printf("%d\n",a+b+c+d+e+f+g+h);
    scanf("%d,%d,%d",&a,&b,&c);
    scanf("%d,%d,%d",&d,&e,&f);
    scanf("%d,%d",&g,&h);
    printf("%d",a+b+c+d+e+f+g+h);
}
