#include<stdio.h>
int main()
{
    double n,b,c;
    scanf("%lf",&b);
    for(c=b;;)
    {
        scanf(" %lf",&n);
        if(n<0)
            break;
        b=b>n?b:n;
        c=c<n?c:n;
    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",b,c);
    return 0;
}
