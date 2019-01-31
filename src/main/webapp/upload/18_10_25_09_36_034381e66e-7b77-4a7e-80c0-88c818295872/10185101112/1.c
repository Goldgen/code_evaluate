#include <stdio.h>

int main()
{
    float h=100.0,H=100.0;
    int i=1;
    for (;i<=9;++i)
    {
        h=h*0.5;
        H=2*h+H;
    }
	h=h*0.5;
    printf("%.3f %.3f",H,h);
    return 0;
}