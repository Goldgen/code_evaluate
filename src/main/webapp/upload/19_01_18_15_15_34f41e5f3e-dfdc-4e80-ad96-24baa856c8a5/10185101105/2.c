#include <stdio.h>
#include <stdlib.h>

int main()
{
    double s=1;
    int a=1,b=1;
    for(;b>=0.0000001;a++)
    {
        b*=a;
        s+=1.0/b;


    }
    printf("%.6lf",s);
    return 0;
}
