#include <stdio.h>
#include <math.h>

int main(void)
{
    int a[4];
    int max;
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    max=a[0];
    for(int i=1;i<4;i++){
        if(max<a[i])max=a[i];
    }printf("%d",max);
return 0;
}
