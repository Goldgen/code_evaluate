#include <stdio.h>
#include <string.h>
int main()
{
    int i=0;
    long long int b=1,a=2;
    double c=0;
    double sum=0;
    for (i=1;i<=50;i++){
        c=(double)a/b;//printf("%lf %d\n",c,i);
        sum+=c;
        a=a+b;
        b=a-b;
    }
    printf("%.2lf",sum);
    return 0;
}
