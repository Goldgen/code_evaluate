#include <stdio.h>

int main(void)
{
    int a,b,c,d,e,f,g,h;
    scanf("%d %d %d\n%d %d %d\n%d %d",&a,&b,&c,&d,&e,&f,&g,&h);
    printf("%d\n",a+b+c+d+e+f+g+h);
    scanf("%d,%d,%d\n%d,%d,%d\n%d,%d",&a,&b,&c,&d,&e,&f,&g,&h);
    printf("%d",a+b+c+d+e+f+g+h);
    return 0;
}