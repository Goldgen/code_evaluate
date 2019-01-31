#include <stdio.h>

int main()
{
    int n=1;
    int a,sum=0;
    float result=0;
    while(n<=5){
        scanf("%d",&a);
        sum+=a;
        n++;
    }
    result=sum/5.0;
    printf("%.1f",result);
    return 0;
}
