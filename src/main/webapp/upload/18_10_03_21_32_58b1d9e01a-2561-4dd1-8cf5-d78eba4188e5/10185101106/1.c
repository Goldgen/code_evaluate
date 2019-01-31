#include<stdio.h>
#include<math.h>
int main()
{
    int d,p;
    float r,m;
    scanf("%d %d %f", &d, &p, &r);
    r = r / 100;
    m = (float)log(p / (p - d * r)) / log(1 + r);
    printf("%.0f", m);
    return 0;
}