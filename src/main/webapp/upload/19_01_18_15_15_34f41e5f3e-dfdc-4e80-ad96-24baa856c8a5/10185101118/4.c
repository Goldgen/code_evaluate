#include<stdio.h>
int main()
{
    float a,b=100,c=0;
    while(scanf("%f",&a)==1)
    {
        if(a<0)break;
        b=(a<b)?a:b;
        c=(a>c)?a:c;
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",c,b);
    return 0;
}
