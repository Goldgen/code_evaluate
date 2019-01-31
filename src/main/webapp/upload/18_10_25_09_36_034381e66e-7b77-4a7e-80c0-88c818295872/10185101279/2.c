#include <stdio.h>
#include<string.h>

int main()
{
    int i=0;
    double a;
    double b=0;
    while(i<5)
    {
        scanf("%lf",&a);
        b=b+a;
        i++;
    }
    printf("%.1lf",b/5);






    return 0;
}



