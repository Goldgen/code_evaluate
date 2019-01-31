#include<stdio.h>

int main()
{
    float Height = 100.0, total_Height;
    int count = 0;

    total_Height = Height;
    for(;count < 10;++count){
        Height/=2;
        total_Height += (2*Height);
    }
    printf("%.3f %.3f",total_Height-2*Height,Height);
    return 0;
}
