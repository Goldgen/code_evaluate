#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c=0,max,min;
    scanf("%f %f",&a,&b);
    if(a>=b)
    {max=a;
     min=b;}
    else
    {max=b;
     min=a;}
    while(a>=0&&b>=0&&c>=0)
     {scanf("%f",&c);
     if (c>=max)
        max=c;
     else if (c<=min&&c>=0)
        min=c;
     else
        continue;}
        printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}
