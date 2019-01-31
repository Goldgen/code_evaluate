#include <stdio.h>

int main()
{
    int x=1, t=1;
    double e=1.0, E=1.0, y=1.0;

    for(; E>=1e-6; t++)
    {
        for(; x<=t; x++)
            y = y * x;
        E = 1/y;
        e = e + E;
    }

    printf("%.6lf", e);
}
