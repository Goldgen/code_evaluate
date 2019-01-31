#include <stdio.h>
#include <stdlib.h>
float average(float n){
    static float t=0,sum=0;
    t++;
    sum+=n;
        return sum/t;
}
int main()
{   float n;
    scanf("%f",&n);
    while(n!=-1){
    printf("%.2f\n",average(n));
    scanf("%f",&n);
    }
    return 0;
}
