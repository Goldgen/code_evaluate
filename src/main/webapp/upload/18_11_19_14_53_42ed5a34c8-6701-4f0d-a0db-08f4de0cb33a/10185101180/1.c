#include <stdio.h>
#include <stdlib.h>
float shu(float n);
int main()
{
    float a;
    scanf("%f",&a);
    shu(a);
    return 0;
}
float shu(float n)
{
    float b,c;
    int i;
     for(b=0,i=1;n!=-1.0f;i++)
    {
        b=b+n;
        c=b/i;
        printf("%.2f\n",c);
        scanf("%f",&n);
    }
}
