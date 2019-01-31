#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    float a,b;
    int i;
    i=1;
    b=0;
    while (i<=5)
    {scanf("%f",&a);
    b=b+a;
    ++i;}
    b=b/5;
    printf("%.1f",b);
    return 0;
}
