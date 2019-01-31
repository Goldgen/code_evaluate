#include <stdio.h>

int main()
{
    float s=0;
    int n=1;
    float h=100;
    s+=h;
    while(n<10){
        n+=1;
        h=1.0/2*h;
        s+=h*2;
    }
    h=1.0/2*h;
    printf("%.3f %.3f",s,h);
    return 0;
}
