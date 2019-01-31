#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d %d %d\n",&a,&b,&c);
    scanf("%d %d %d\n",&d,&e,&f);
    scanf("%d %d",&g,&h);
	printf("%d\n",a+b+c+d+e+f+g+h);
    scanf("%d,%d,%d\n",&a,&b,&c);
    scanf("%d,%d,%d\n",&d,&e,&f);
    scanf("%d,%d",&g,&h);
	printf("%d",a+b+c+d+e+f+g+h);
}