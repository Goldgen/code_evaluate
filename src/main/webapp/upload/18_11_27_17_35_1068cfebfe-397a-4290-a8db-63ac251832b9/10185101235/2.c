#include<stdio.h>
int main(void)
{
    double data[100] = {0};
    int i = 0;
    double total = 0;
    for(i=0;i<100;i++)
    {
        data[i] = 1/((2*((double)i+1))*(2*(i+1)+1)*(2*(i+1)+2));
        if (i%2 == 0)
            total += data[i];
        else
            total -= data[i];
    }
    printf("%.4lf",total*4+3);
}
