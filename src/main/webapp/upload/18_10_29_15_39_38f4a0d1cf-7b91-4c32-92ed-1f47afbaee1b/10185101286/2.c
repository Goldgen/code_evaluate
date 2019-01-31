#include<stdio.h>
int main()
{
    int i;
    int count=1;
    float N;
    double e=1;
    for(i=1;i<1000;++i)
    {
        count*=i;
        N=(float)1/(float)count;
        e+=N;
        if(N<0.000001)
            break;
    }
    printf("%.6f",e);
    return 0;
}
