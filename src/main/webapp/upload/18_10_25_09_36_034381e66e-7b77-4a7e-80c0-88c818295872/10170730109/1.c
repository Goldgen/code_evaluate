#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =1;
    float h = 100;
    float d = 100;
    for(i=1;i<10;i++){
        h*=0.5;
        d+=(2*h);
    } 
    h*=0.5;
    printf("%.3f %.3f",d,h);
}
