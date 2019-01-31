#include <stdio.h>

int main (void)

{
    float h = 100;
    int n = 1;
    float s = h;

    for (n = 1;n <= 10;n++)
    {
        h /= 2;
        s += 2*h;
    }
	s = s - 2*h;
    printf("%.3f %.3f",s,h);
}
