#include <stdio.h>

int main()
{
    int i;
    double in[5], out[5];

    for(i=0; i<5; i++)
        scanf("%lf", &in[i]);

    for(i=0; i<5; i++)
        out[i] = 1.0/in[i];

    for(i=0; i<5; i++)
    {
        if(i==4)
            printf("%.2lf\n", out[i]);
        else
            printf("%.2lf ", out[i]);
    }
    printf("%.6lf", out[0]+out[1]+out[2]+out[3]+out[4]);
}
