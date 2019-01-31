#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num,fz=2,fm=1,i,a;
    for(i=1;i<=50;i++)
    {num+=fz/fm;
    a=fz;
    fz=fm+fz;
    fm=a;}
    printf("%.2lf",num);
    return 0;
}
