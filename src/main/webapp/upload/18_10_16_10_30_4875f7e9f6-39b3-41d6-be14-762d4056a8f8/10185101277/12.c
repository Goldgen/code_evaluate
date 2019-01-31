#include<stdio.h>
void main()
{
    double x,y,z;
    char c;
    scanf("%lf%c%lf",&x,&c,&y);
    switch (c)
	{
    case '+' :z=x+y;break;
    case '-' :z=x-y;break;
    case '*' :z=x*y;break;
    case '/' :z=(y==0)?(0):x/y;break;
	}
    printf("%.3lf",z);
    return 0;

}