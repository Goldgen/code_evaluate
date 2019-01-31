#include <stdio.h>
int main()
{
    double a[6],s=0;
    int n;
    for(n=1;n<=5;n++)
        scanf("%lf",&a[n]);
    for(n=1;n<=5;n++)
    {
        printf("%.2f",1.0/a[n]);
        if(n!=5)
            printf(" ");
    }
    for(n=1;n<=5;n++)
        s+=(1.0/a[n]);
    printf("\n%.6f",s);
    return 0;
}
