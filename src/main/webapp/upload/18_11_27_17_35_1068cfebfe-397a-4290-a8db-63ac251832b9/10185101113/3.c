#include <stdio.h>
#include <math.h>
int main()
{
    float amounts[5];
    long dollars[5],cents[5];
    for(int i=0;i<5;i++)
    {
        scanf("%f",&amounts[i]);
        dollars[i]=(long)floor(amounts[i]);
        cents[i]=(long)round(100.0*(amounts[i]-dollars[i]));
    }
    for(int i=0;i<5;i++)
    {
        printf("$%ld.%.2ld",dollars[i],cents[i]);
        if(i!=4)
        printf(" ");
    }
    return 0;
}
