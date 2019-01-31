#include <stdio.h>
#include <stdlib.h>

float Avg(float n){
    static float sum,count=0.0;
    sum+=n;
    ++count;
    return 1.0*sum/count;
}

int main()
{
    float n;
    while(scanf("%f",&n)!=EOF){
        if(n==-1)
            break;
    printf("%.2f\n",Avg(n));
    }
    return 0;
}