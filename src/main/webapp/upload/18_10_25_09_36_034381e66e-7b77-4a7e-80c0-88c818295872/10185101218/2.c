#include<stdio.h>
int main(void)
{
    int a[5];
    int sum=0;
    int i;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%.1f",sum/5.0);
    return 0;
}
