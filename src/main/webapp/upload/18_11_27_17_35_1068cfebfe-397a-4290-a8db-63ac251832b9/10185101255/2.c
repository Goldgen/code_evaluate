#include <stdio.h>

int main()
{
    double data[100];
    double s = 0.0;
    
    for (unsigned int i = 0; i < 100; i++) {
        data[i] = 1.0 / ((2*i+2) * (2*i+3) * (2*i+4));
    }
    
    for (unsigned int i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            s += data[i];
        }
        else s -= data[i];
    }
    
    printf("%.4lf", s*4.0 + 3.0);
    
    return 0;
}
