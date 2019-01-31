#include<stdio.h>
#include<math.h>

main()
{
    float c = 0.0;
    float a = 0.0;
    float b = 0.0;
    scanf("%f %f",&a,&b);
    if(a>=b)
    c = a - b;
    else
    c = b - a;
    c = sqrt(c);
    printf("%.8f %.8f %.3f",a,b,c);

}
