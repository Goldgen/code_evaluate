#include<stdio.h>
int main()
{
    double a[5];
    int i=0;
    while (i<5)
    {
        scanf("%lf",&a[i]);
        i++;
    }
    for ( int v=0; v<4; v++)
        printf("%.2lf ",1/a[v]);
    printf("%.2lf\n%.6lf",1/a[4],1/a[0]+1/a[1]+1/a[2]+1/a[3]+1/a[4]);
    return 0;
}
