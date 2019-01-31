#include <stdio.h>
int main()
{
    float a,b,c,d,e,result;
    a=b=c=d=e=0.0f;
    while((a!=EOF)&&(b!=EOF)&&(c!=EOF)&&(d!=EOF)&&(e!=EOF))
    {
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    result=(a+b+c+d+e)/5.0f;
    printf("%.1f\n",result);
    a=b=c=d=e=0.0f;
    }
    return 0;
}
