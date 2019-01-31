#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double ans=0;
    double i;double j;double s;double t;
    for(i=1,j=1,s=2;i<=50;i++){
        ans+=(s/j);
        t=j;
        j=s;
        s+=t;
    }
    printf("%.2lf",ans);
    return 0;
}
