#include <stdio.h>
#include <stdlib.h>
int main()
{
    double sum=0;
    double a=2,b=1,i=0,tmp=0;
    while(i<50){
        sum+=1.0*a/b;
        tmp=a;
        a=a+b;
        b=tmp;
        i++;
    }
    printf("%.2lf",sum);
    return 0;
}
