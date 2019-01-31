#include <stdio.h>
int main()
{
    float a,b,c;
    int j;
    float i;
    a=2;
    b=1;
    i=(float)2/1;
    for(j=1;j<50;++j)
    {
        c=b;
        b=a;
        a=b+c;
        i+=(float)a/b;
    }
    printf("%.2f",i);
    return 0;
}
