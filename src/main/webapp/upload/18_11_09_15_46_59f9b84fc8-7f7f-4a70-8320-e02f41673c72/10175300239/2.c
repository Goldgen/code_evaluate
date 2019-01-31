#include <stdio.h>

int main()
{
    float result=0.0;
    int count;
    unsigned long long k;
    unsigned long long i=2;
    unsigned long long j=1;
    for(count=0;count<50;count++){
        result+=(float)(i)/j;
        k=j;
        j=i;
        i+=k;
    }
    printf("%.2f",result);
    return 0;
}