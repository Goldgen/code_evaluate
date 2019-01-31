#include <stdio.h>

int main()
{
    int i, d=0;
    float amounts[5];
    long dollars[5], cents[5];

    for(i=0; i<5; i++)
        scanf("%f", &amounts[i]);
    for(i=0; i<5; i++)
        dollars[i] = (long)amounts[i];
    for(i=0; i<5; i++)
        cents[i] = (long)((amounts[i]-dollars[i])*100);

    for(i=0; i<5; i++)
    {
        if(d==0)
            d = 1;
        else
            printf(" ");

        printf("$%ld.%ld", dollars[i], cents[i]);
    }
}
