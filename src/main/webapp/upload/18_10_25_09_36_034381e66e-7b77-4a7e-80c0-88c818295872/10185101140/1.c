#include <stdio.h>

int main(void)
{
    float h = 100.000f,distance = 100.000f;
    int n =1;
    while (n<10){
        h = h/2;
        distance = distance+h*2;
        n++;
    }
    printf("%.3f %.3f",distance,h/2);
    return 0;
}