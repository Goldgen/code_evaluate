#include<stdio.h>


int main()
{
    float e=1.0;
    float s=1.0;
    for(int i=1;i<=10;i++){
        s*=i;
        e+=1/s;
    }
    printf("%.6f",e);
    return 0;
}
