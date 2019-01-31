#include <stdio.h>
#include <stdlib.h>

int i = 0;

float runave(float);

int main()
{
    float n = 0;
    do
    {
       scanf("%f",&n);
       if(n==-1)
        return 0;
        printf("%.2f\n",runave(n));
       i++;
    }while(1);
    return 0;
}

float runave(float j)
{
    static float sum=0;
    sum += j;
    return sum/(i+1);
}
