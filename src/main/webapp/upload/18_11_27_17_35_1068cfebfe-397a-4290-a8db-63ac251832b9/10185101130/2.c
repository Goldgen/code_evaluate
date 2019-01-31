#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double i;
    double data[100];
    for(n = 0,i = 2; n <= 99; n++,i=i+2)
    {
        data[n] = 1/(i*(i+1)*(i+2));
    }
    double sum = 0.0;
    for(n = 0; n <= 99; n++)
    {
        if(n % 2 == 1)
            sum -= data[n];
        else
            sum += data[n];
    }
    printf("%.4f",sum*4.0+3.0);
    return 0;
}
