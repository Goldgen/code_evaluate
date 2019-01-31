#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double pi=3.1415926;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],t=1,tmax=1;   //t为当前平台长度 tmax为最大平台长度
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i&&a[i]==a[i-1])
            t++;
        else
            t=1;
        if(tmax<t)
            tmax=t;
    }
    printf("%d",tmax);
}
