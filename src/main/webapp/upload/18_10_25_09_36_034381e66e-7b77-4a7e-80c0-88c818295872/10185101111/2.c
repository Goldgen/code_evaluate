#include <stdio.h>
#include <math.h>
int main()
{
    int a[5];
    int sum=0;
    for(int i=0;i<=4;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%.1f",sum/5.0);
}