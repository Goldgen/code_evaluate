#include<stdio.h>

void main() {
    int i, a = 1;
    double e = 1.0, E = 1.0;
    for (i = 1; E < 1000000; i++) {
        E = E * i;
        e = (double) 1 / E + e;
    }
    printf("%lf", e);

}